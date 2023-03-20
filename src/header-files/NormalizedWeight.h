//
// Created by xaprier on 3/20/23.
//

#ifndef METHODS_SMART_NORMALIZEDWEIGHT_H
#define METHODS_SMART_NORMALIZEDWEIGHT_H


class NormalizedWeight {
    int rank, nWeight;
public:
    explicit NormalizedWeight(int rank);
    float operator=(const NormalizedWeight &other);
};


#endif //METHODS_SMART_NORMALIZEDWEIGHT_H
