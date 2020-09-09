#include <iostream>
#include <iomanip>
#include <algorithm>
#include "BakedGood.h"
#include "Bread.h"
#include "Cake.h"
#include "LayerCake.h"
#include "CupCake.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    // Declare variables
    string bakedType;
    string breadType;
    vector<BakedGood*> bakedItems;
    int breadQuantity;
    string inpFlavor;
    string inpFrosting;
    int inpLayers;
    int cakeQuantity;
    string inpSprinkles;
    int totalQuantity;
    double totalPrice;
    // temporary vectors for the invoice section (part 3)
    vector<BakedGood*> uniqueItems;
    vector<int> countUniques;
    
    
    // Part 1:
    cout << "**Bread and Cakes Bakery**" << endl << endl;
    
    cout << "Enter sub-order (enter \"done\" to finish)" << endl;
    do {
        cout << "Sub-order: " << endl;
        cin >> bakedType;
        
        // make a bread object
        if (bakedType == "Bread") {
            cin >> breadType;
            cin >> breadQuantity;
            for (int i = 0; i < breadQuantity; ++i) {
                bakedItems.push_back(new Bread(breadType));
            }
        }
        // make layer-cake
        if (bakedType == "Layer-cake") {
            cin >> inpFlavor;
            cin >> inpFrosting;
            cin >> inpLayers;
            cin >> cakeQuantity;
            for (int i = 0; i < cakeQuantity; ++i) {
                bakedItems.push_back(new LayerCake(inpFlavor, inpFrosting, inpLayers));
            }
        }
        // make cupcake
        if (bakedType == "Cupcake") {
            cin >> inpFlavor;
            cin >> inpFrosting;
            cin >> inpSprinkles;
            cin >> cakeQuantity;
            for (int i = 0; i < cakeQuantity; ++i) {
                bakedItems.push_back(new CupCake(inpFlavor, inpFrosting, inpSprinkles));
            }
        }
    } while(bakedType != "done");
    cout << endl;
    
    // Part 2: Order conf
    cout << "Order Confirmations:" << endl;
    for (int i = 0; i < bakedItems.size(); ++i) {
        cout << bakedItems.at(i)->ToStr() << endl;
    }
    cout << endl;
    
    // Part 3: Invoice
    // fill the new vectors to hold bakedItems's unique items and their frequency
    cout << "Invoice:" << endl;
    cout <<  setw(75) << left << "Baked Good";
    cout << setw(9) << right << "Quantity" << setw(9) << right << "Total" << endl;
    int incrementer;
    for (int i = 0; i < bakedItems.size(); ++i) {
        incrementer = 0;
        bool inUniqueItems = false;
        for (int j = 0; j < uniqueItems.size(); ++j) {
            if (bakedItems.at(i)->ToStr() == uniqueItems.at(j)->ToStr()) {
                inUniqueItems = true;
            }
        }
        if(inUniqueItems == false) {
            uniqueItems.push_back(bakedItems.at(i));
            for (int j = 0; j < bakedItems.size(); ++ j) {
                if (bakedItems.at(i)->ToStr() == bakedItems.at(j)->ToStr()) {
                    incrementer += 1;
                }
            }
            countUniques.push_back(incrementer);
        }
    }
    // Print the invoice
    totalQuantity = 0;
    totalPrice = 0;
    for (int i = 0; i < uniqueItems.size(); ++i) {
        cout  << setw(75) << left << uniqueItems.at(i)->ToStr();
        cout << setw(9) << right << countUniques.at(i) << setw(9) << right;
        cout << fixed << setprecision(2) << uniqueItems.at(i)->Discount(countUniques.at(i));
        cout << endl;
        totalQuantity = totalQuantity + countUniques.at(i);
        totalPrice = totalPrice + uniqueItems.at(i)->Discount(countUniques.at(i));
    }
    cout << setw(75) << left << "Totals";
    cout << setw(9) << right << totalQuantity << setw(9) << right << totalPrice << endl;
    
    cout << "Good Bye" << endl;
    
    return 0;
}

