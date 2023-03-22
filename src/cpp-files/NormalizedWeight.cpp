//
// Created by xaprier on 3/20/23.
//

#include "../header-files/NormalizedWeight.h"
#include <cmath>
NormalizedWeight::NormalizedWeight(int rank, const std::vector<int> *ranks) : rank(rank) {
    this->ranks = ranks;
}

float NormalizedWeight::operator=(const NormalizedWeight &other) {
    // calculate the normalized weight for attribute and return
    float sum = 0;
    for (int i = 0; i < ranks->size(); ++i) {
        sum += pow(sqrt(2), ranks->at(i));
    }
    return pow(sqrt(2), rank) / sum;
}
