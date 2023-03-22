//
// Created by xaprier on 3/20/23.
//

#include "../header-files/EffectiveWeight.h"
#include <cmath>

EffectiveWeight::EffectiveWeight(float value, float *rate, bool type) : value(value), rate(rate), type(type) {

}

float EffectiveWeight::operator=(const EffectiveWeight &other) {
    // calculate effective weight of alternative's attribute and return
    float result = 0;
    if (type) {
        result = 4 + log2(((value - rate[0]) / (rate[1] - rate[0])) * 64);
    } else {
        result = 10 - log2(((value - rate[0]) / (rate[1] - rate[0])) * 64);
    }
    return result;
}
