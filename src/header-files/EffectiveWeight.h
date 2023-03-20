//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_EFFECTIVEWEIGHT_H
#define METHODS_SMART_EFFECTIVEWEIGHT_H


class EffectiveWeight {
    bool type;
    float value;
    float *rate;

public:
    EffectiveWeight(float value, float *rate, bool type);

    float operator=(const EffectiveWeight &other);
};


#endif //METHODS_SMART_EFFECTIVEWEIGHT_H
