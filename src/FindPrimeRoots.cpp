//
// Created by lucas on 25.02.24.
//

#include <cmath>
#include "FindPrimeRoots.h"

std::vector<long> FindPrimeRoots::operator()(long k) {
    if (k<1) return {};
    std::vector<long> res{};
    FindPrimeRoots::operator()(k,res);
    return res;
}

void FindPrimeRoots::operator()(long k, std::vector<long> & vec) {

    long left_root = static_cast<long>(sqrt(k));
    long right_root = static_cast<long>(sqrt(k));

    long prod = left_root*right_root;
    while(prod != k){
        if (prod < k) right_root++;
        else left_root--;
        prod = left_root*right_root;
    }

    if (right_root == k) vec.push_back(k);
    else
    {
        FindPrimeRoots::operator()(left_root, vec);
        FindPrimeRoots::operator()(right_root, vec);
    }
}
