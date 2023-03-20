//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_ATTRIBUTERATE_H
#define METHODS_SMART_ATTRIBUTERATE_H


class AttributeRate {
    int min, max;
public:
    AttributeRate(int min, int max);
    float* operator=(const AttributeRate &other);
};


#endif //METHODS_SMART_ATTRIBUTERATE_H
