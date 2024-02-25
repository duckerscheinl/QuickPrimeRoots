#include <iostream>
#include "FindPrimeRoots.h"
#include <cstdio>
#include <algorithm>

int main(int argc, char* argv[]) {

    long k = 0;
    if (argc == 1) printf("Please enter a number to find the prime roots!");
    else if(argc > 2) printf("Please only enter one number at a time!");
    else {
        k = std::stoll(argv[1]);
    }

    FindPrimeRoots prs;

    std::vector<long> res = prs(k);

    std::for_each(res.begin(), res.end(), [](long a){printf("%ld ", a);});
    printf("\n");

    return 0;
}
