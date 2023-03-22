//
// Created by xaprier on 3/20/23.
//

#include "../header-files/Alternative.h"

Alternative::Alternative(const std::string &alternativeName, int attributeCount, const Attribute *referenceAttribute) : alternativeName(alternativeName) {
    float value;
    this->finalRank = 0;
    for (int i = 0; i < attributeCount; ++i) {
        std::cout << "Enter the value of " << alternativeName << "'s " << referenceAttribute[i].attributeName << " attribute value: ";
        std::cin >> value;
        Attribute attribute(value, referenceAttribute[i]);
        this->finalRank += attribute.effectiveWeight * attribute.nWeight;
    }
}

Alternative::Alternative() { }
