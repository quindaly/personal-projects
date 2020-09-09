//
//  CupCake.cpp
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#include "CupCake.h"
#include <sstream>
// const variables/magic numbers
const double CUP_PRICE = 1.95;
const double CREAM_CHEESE = 0.20;
const int SMALL_DISCOUNT_CUTOFF = 2;
const int BIG_DISCOUNT_CUTOFF = 4;
const double SMALL_DISCOUNT = 0.30;
const double BIG_DISCOUNT = 0.40;
CupCake::CupCake(string inpFlavor, string inpFrosting, string inpSprinkles):Cake(inpFlavor, inpFrosting, CUP_PRICE) {
    sprinkles = inpSprinkles;
    if (cakeFrosting == "cream-cheese") {
        basePrice = basePrice + CREAM_CHEESE;
    }
}

string CupCake::ToStr() {
    stringstream cupToStr;
    cupToStr << cakeFlavor << " cupcake with " << cakeFrosting << " frosting and " << sprinkles << " sprinkles " << BakedGood::ToStr();
    return cupToStr.str();
}

double CupCake::Discount(double inpQuantity) {
    if (inpQuantity >= SMALL_DISCOUNT_CUTOFF && inpQuantity < BIG_DISCOUNT_CUTOFF) {
        totalPrice = (basePrice * inpQuantity) - (SMALL_DISCOUNT * inpQuantity);
    }
    else if (inpQuantity >= BIG_DISCOUNT_CUTOFF) {
        totalPrice = (basePrice * inpQuantity) - (BIG_DISCOUNT * inpQuantity);
    }
    else {
        totalPrice = basePrice * inpQuantity;
    }
    return totalPrice;
}
