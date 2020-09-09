//
//  Cake.h
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef Cake_h
#define Cake_h
#include "BakedGood.h"
#include <stdio.h>
class Cake : public BakedGood {
public:
    Cake(string inpFlavor, string inpFrosting, double cakePrice);
    
protected:
    string cakeFlavor;
    string cakeFrosting;
    double cakePrice;
};

#endif /* Cake_h */
