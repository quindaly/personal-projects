//
//  Cake.cpp
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//
#include "Cake.h"
Cake::Cake(string inpFlavor, string inpFrosting, double cakePrice):BakedGood(cakePrice) {
    cakeFlavor = inpFlavor;
    cakeFrosting = inpFrosting;
}
