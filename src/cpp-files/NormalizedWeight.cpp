//
// Created by xaprier on 3/20/23.
//

#include "../header-files/NormalizedWeight.h"

NormalizedWeight::NormalizedWeight(int rank, const std::vector<int> &ranks) : rank(rank) {
    this->ranks = &ranks;
}

float NormalizedWeight::operator=(const NormalizedWeight &other) {
    // calculate the normalized weight for attribute and return
    return 0;
}
