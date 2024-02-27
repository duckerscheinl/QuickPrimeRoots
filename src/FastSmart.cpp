//
// Created by lucas on 27.02.24.
//

#include "FastSmart.h"
#include <cstdio>


std::pair<long, long> FastSmart::operator()(long k) {
    if (k < 1) return std::pair<long,long>{0,0};
    else if (k==1||k==2) return std::pair<long,long>{1,k};

    long lower = 2;
    long upper = k/2+1;
    for (;7*lower*lower<k;lower++){
        upper = k/lower;
        if(upper*lower==k) return std::pair<long,long>{lower,upper};
    }

    long square;
    while(lower <= upper){
        square = lower*upper;
        if (square < k) lower++;
        else if (square > k) upper--;
        else return std::pair<long,long>{lower,upper};
    }

    return std::pair<long, long>{1, k};
}
