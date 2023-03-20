//
// Created by xaprier on 3/20/23.
//

#include "../header-files/Attribute.h"

Attribute::Attribute(float value, const Attribute &other) : min(other.min), max(other.max), rank(other.rank), type(other.type), attributeName(other.attributeName) {
    this->value = value;

    auto normalizedWeight = NormalizedWeight(rank);
    auto attributeRate = AttributeRate(min, max);

    nWeight = normalizedWeight.operator=(normalizedWeight);
    rate = attributeRate.operator=(attributeRate);

    auto eWeight = EffectiveWeight(value, rate, type);

    effectiveWeight = eWeight.operator=(eWeight);
}

Attribute::Attribute(int min, int max, int rank, bool type, std::string attributeName) : min(min), max(max), rank(rank), type(type), attributeName(attributeName) { }

Attribute::Attribute() {
    char c;
    std::cout << "Enter the attribute's name, minimum value, maximum value, rank in your decision, type(- +):";
    std::cin >> attributeName >> min >> max >> rank >> c;
    type = c == '+';
}

