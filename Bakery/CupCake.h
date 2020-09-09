//
//  CupCake.h
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef CupCake_h
#define CupCake_h
#include "Cake.h"

#include <stdio.h>
class CupCake : public Cake {
public:
    CupCake(string inpFlavor, string inpFrosting, string inpSprinkles);
    virtual string ToStr();
    virtual double Discount(double inpQuantity);
    
private:
    string sprinkles;
};

#endif /* CupCake_h */
