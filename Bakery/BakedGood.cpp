//
//  BakedGood.cpp
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#include "BakedGood.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

BakedGood::BakedGood(double bakedGoodPrice) {
    basePrice = bakedGoodPrice;
}

string BakedGood::ToStr() {
    stringstream priceToStr;
    priceToStr <<  "($" << to_string(basePrice) << ")";
    return priceToStr.str();
}
