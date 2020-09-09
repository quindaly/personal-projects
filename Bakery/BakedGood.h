//
//  BakedGood.h
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef BakedGood_h
#define BakedGood_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class BakedGood {
public:
    BakedGood(double bakedGoodPrice);
    virtual string ToStr();
    virtual double Discount(double itemQuantity) = 0;
    
protected:
    double basePrice;
    double totalPrice;
};

#endif /* BakedGood_h */
