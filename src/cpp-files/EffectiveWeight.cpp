//
// Created by xaprier on 3/20/23.
//

#include "../header-files/EffectiveWeight.h"

float EffectiveWeight::operator=(const EffectiveWeight &other) {
    return 0;
}

EffectiveWeight::EffectiveWeight(float value, float *rate, bool type) : value(value), rate(rate), type(type) {

}
