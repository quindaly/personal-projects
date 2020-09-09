//
//  Bread.h
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef Bread_h
#define Bread_h
#include "BakedGood.h"
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

class Bread : public BakedGood {
public:
    Bread(string inpType);
    virtual string ToStr();
    virtual double Discount(double inpQuantity);
    
private:
    string breadType;
};

#endif /* Bread_h */
