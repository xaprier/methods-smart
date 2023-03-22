//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_ATTRIBUTE_H
#define METHODS_SMART_ATTRIBUTE_H
#include "NormalizedWeight.h"
#include "AttributeRate.h"
#include "EffectiveWeight.h"
#include <string>
#include <iostream>
#include <vector>
class Attribute {
    // variables
    int min, max, rank;
    float value;
    bool type;
    std::string attributeName;
    static std::vector<int> ranks;

    // results
    float nWeight;
    float *rate;
    float effectiveWeight;

public:
    // value is going to input from user
    Attribute();
    Attribute(float value, const Attribute &other);
    Attribute(int min, int max, int rank, bool type, std::string attributeName);
    friend class Alternative;
};


#endif //METHODS_SMART_ATTRIBUTE_H
