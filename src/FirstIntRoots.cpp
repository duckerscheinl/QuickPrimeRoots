//
// Created by lucas on 26.02.24.
//

#include "FirstIntRoots.h"
#include <cstdio>

std::pair<long, long> FirstIntRoots::operator()(long k) {
    if (k < 1) return std::pair<long,long>{0,0};
    else if (k==1||k==2) return std::pair<long,long>{1,k};

    long lower = 2;
    long upper = k/2 + 1;

    long square = lower*upper;

    while (square != k){
        if (upper < lower){
            return std::pair<long,long>{1,k};
        }
        if (square < k){
            lower++;
            upper = k/lower + 1;
        }
        else if (square > k) {
            upper--;
        }
        else {
            break;
        }
        square = lower*upper;
    }

    return std::pair<long, long>{lower, upper};
}

