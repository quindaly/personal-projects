//
//  Bread.cpp
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//
#include "Bread.h"
#include <string>
#include <sstream>
using namespace std;

// declare constant variables for Bread.cpp
const double BREAD_PRICE = 4.50;
const int DISCOUNT_CUTOFF = 3;
Bread::Bread(string inpType):BakedGood(BREAD_PRICE) {
    breadType = inpType;
}

string Bread::ToStr() {
    stringstream outSS;
    outSS << breadType << " bread " << BakedGood::ToStr();
    return outSS.str();
}

double Bread::Discount(double inpQuantity) {
    if (inpQuantity >= DISCOUNT_CUTOFF) {
        totalPrice = (basePrice * inpQuantity) - (floor(inpQuantity / DISCOUNT_CUTOFF) * basePrice);
    }
    else {
        totalPrice = basePrice * inpQuantity;
    }
    return totalPrice;
}
