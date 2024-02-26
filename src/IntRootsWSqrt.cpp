//
// Created by lucas on 26.02.24.
//

#include "IntRootsWSqrt.h"

std::pair<long, long> IntRootsWSqrt::operator()(long k) {
    long left_root = static_cast<long>(sqrt(k));
    long right_root = static_cast<long>(sqrt(k));

    long prod = left_root*right_root;
    while(prod != k){
        if (prod < k) right_root++;
        else left_root--;
        prod = left_root*right_root;
    }

    return std::pair<long,long>{left_root, right_root};
}
