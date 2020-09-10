//
//  main.cpp
//  RuthGame
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userOption;
    
    cout << "Welcome to the Ruth game! Make your selection:" << endl << endl;
    cout << "description: 2 words that describe Ruth" << endl;
    cout << "best: Ruth's best feature" << endl;
    cout << "worst: Ruth's worst feature" << endl;
    cout << "habit: Ruth's coolest habit" << endl;
    cout << "talents: List of Ruth's talents" << endl;
    cout << "options: See game options" << endl;
    cout << "quit: Quit game" << endl;
    
    cin >> userOption;
    cout << endl;
    cin.ignore();
    
    while (userOption != "quit") {
        if (userOption == "options") {
        cout << "Welcome to the Ruth game! Make your selection:" << endl << endl;
        cout << "description: 2 words that describe Ruth" << endl;
        cout << "best: Ruth's best feature" << endl;
        cout << "worst: Ruth's worst feature" << endl;
        cout << "habit: Ruth's coolest habit" << endl;
        cout << "talents: List of Ruth's talents" << endl;
        cout << "options: See game options" << endl;
        cout << "quit: Quit game" << endl;
        }
        else if (userOption == "description") {
        cout << "The 2 best words that describe Ruth are: ARTSY and ANALYTICAL." << endl;
        }
        else if (userOption == "best") {
            cout << "Ruth's best feature: Hands, obviously." << endl;
        }
        else if (userOption == "worst") {
            cout << "Ruth's worst feature: Long fingernails." << endl;
        }
        else if (userOption == "habit") {
            cout << "Ruth's coolest habit: Mimicking other people's actions and words (bc empathy)." << endl;
        }
        else if (userOption == "talents") {
            cout << "Ruth's talents include: Violin, singing, photography, water skiing, \"solamente right in su gato\", mash-ups, drawing eyeballs, being a human dictionary, amateur videography with Rosemary, and stats." << endl;
        }
    
        
        cout << endl;
        cout << "Enter selection: ";
        cin >> userOption;
        cout << endl;
        cin.ignore();
    }
    
    cout << "Adios" << endl;
    return 0;
}
