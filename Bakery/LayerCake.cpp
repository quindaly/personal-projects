//
//  LayerCake.cpp
//  MainLab9
//
//  Created by Quin Daly on 12/10/19.
//  Copyright © 2019 Quin Daly. All rights reserved.
//
#include "LayerCake.h"
#include <sstream>
const double LAYER_PRICE = 9.00;
const int LAYER_BONUS = 3;
const int DISCOUNT_CUTOFF_LAYER = 3;
const int DISCOUNT_DOLLARS_LAYER = 2;
LayerCake::LayerCake(string inpFlavor, string inpFrosting, int inpLayers):Cake(inpFlavor, inpFrosting, LAYER_PRICE) {
    numLayers = inpLayers;
    if (numLayers > 1) {
        basePrice = basePrice + (LAYER_BONUS * (numLayers - 1));
    }
    if (cakeFrosting == "cream-cheese") {
        basePrice = basePrice + (1 * numLayers);
    }
    
}

string LayerCake::ToStr() {
    stringstream layerToStr;
    layerToStr << numLayers << "-layer " << cakeFlavor << " cake with " << cakeFrosting << " frosting " << BakedGood::ToStr();
    return layerToStr.str();
}

double LayerCake::Discount(double inpQuantity) {
    if (inpQuantity >= DISCOUNT_CUTOFF_LAYER) {
        totalPrice = (basePrice * inpQuantity) - (DISCOUNT_DOLLARS_LAYER * inpQuantity);
    }
    else {
        totalPrice = basePrice * inpQuantity;
    }
    return totalPrice;
}
