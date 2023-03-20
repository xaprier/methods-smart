//
// Created by xaprier on 3/20/23.
//

#include "../header-files/AttributeRate.h"

AttributeRate::AttributeRate(int min, int max) : min(min), max(max) { }


float *AttributeRate::operator=(const AttributeRate &other) {
    auto* result = new float[2];
    return result;
}
