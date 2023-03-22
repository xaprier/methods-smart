//
// Created by xaprier on 3/20/23.
//

#include "../header-files/SmartMethod.h"
#include <iostream>
SmartMethod::SmartMethod() {
    std::string resultName;
    float resultValue = 0;

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
        if (resultValue < alternatives[i].finalRank) {
            resultValue = alternatives[i].finalRank;
            resultName = alternatives[i].alternativeName;
        }
    }

    std::cout << "The best alternative is " << resultName << " with a value of " << resultValue << std::endl;
}
