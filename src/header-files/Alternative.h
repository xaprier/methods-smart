//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_ALTERNATIVE_H
#define METHODS_SMART_ALTERNATIVE_H
#include <string>
#include "Attribute.h"

class Alternative {
    std::string alternativeName;
    float finalRank;
public:
    explicit Alternative(const std::string &alternativeName, int attributeCount, const Attribute *referenceAttribute);
    Alternative();
    friend class SmartMethod;
};

#endif //METHODS_SMART_ALTERNATIVE_H
