//
//  LayerCake.h
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//

#ifndef LayerCake_h
#define LayerCake_h
#include "Cake.h"

#include <stdio.h>
class LayerCake : public Cake {
public:
    LayerCake(string inpFlavor, string inpFrosting, int inpLayers);
    virtual string ToStr();
    virtual double Discount(double inpQuantity);
    
private:
    int numLayers;
};


#endif /* LayerCake_h */
