//
// Created by xaprier on 3/20/23.
//

#include "../header-files/AttributeRate.h"
#include <cmath>
#include <iostream>

AttributeRate::AttributeRate(int min, int max) : min(min), max(max) { }

float *AttributeRate::operator=(const AttributeRate &other) {
    auto* result = new float[2];
    // operations for calculation minimum and maximum attribute rate
    
    // ((maximum - minimum) / (64.0 / 2^i)) + minimum
    result[0] = ((max - min) / (64.0 / pow(2, 0))) + min; // minimum
    result[1] = ((max - min) / (64.0 / pow(2, 6))) + min; // maximum

    return result;
}
