//
// Created by xaprier on 3/20/23.
//

#include "../header-files/SmartMethod.h"
#include <iostream>
SmartMethod::SmartMethod() {
    std::cout << "How many attribute there will be: ";
    int attributeCount;
    std::cin >> attributeCount;
    attributeBases = new Attribute[attributeCount];

    std::cout << "How many alternatives there will be: ";
    int alternativeCount;
    std::cin >> alternativeCount;
    alternatives = new Alternative[alternativeCount];
    for (int i = 0; i < alternativeCount; ++i) {
        std::cout << "Enter the name of the " << i + 1 << ". alternative: ";
        std::string alternativeName;
        std::cin >> alternativeName;
        alternatives[i] = Alternative(alternativeName, attributeCount, &*attributeBases);
    }
}
