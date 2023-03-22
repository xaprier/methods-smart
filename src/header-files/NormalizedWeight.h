//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_NORMALIZEDWEIGHT_H
#define METHODS_SMART_NORMALIZEDWEIGHT_H
#include <vector>

class NormalizedWeight {
    int rank, nWeight;
    const std::vector<int> *ranks;

  public:
    explicit NormalizedWeight(int rank, const std::vector<int> &ranks);
    float operator=(const NormalizedWeight &other);
};


#endif //METHODS_SMART_NORMALIZEDWEIGHT_H
