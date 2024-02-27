//
// Created by lucas on 27.02.24.
//

#include "FastNaive.h"

std::pair<long, long> FastNaive::operator()(long k) {

    if (k < 1) return std::pair<long,long>{0,0};
    else if (k==1||k==2) return std::pair<long,long>{1,k};

    long lower = 2;
    long upper;
    long square;
    for(;lower*lower<=k;lower++){
        upper = k/lower;
        square = lower * upper;
        if (square == k) return std::pair<long,long>{lower,upper};
    }

    return std::pair<long, long>{1, k};

}
