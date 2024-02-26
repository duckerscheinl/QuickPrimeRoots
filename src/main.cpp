#include <iostream>
#include "FindPrimeRoots.h"
#include "IntRootsWSqrt.h"
#include "FirstIntRoots.h"
#include <cstdio>
#include <chrono>
#include <algorithm>

int main(int argc, char* argv[]) {

    long k = 0;
    if (argc == 1) printf("Please enter a number to find the prime roots!\n");
    else if(argc > 2) printf("Please only enter one number at a time!\n");
    else {
        k = std::stoll(argv[1]);
    }


    /*IntRootsWSqrt rf;
    FindPrimeRoots<IntRootsWSqrt> prs;
    auto start_1 = std::chrono::high_resolution_clock::now();
    std::vector<long> res = prs(k, rf);
    auto end_1 = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::milliseconds>(end_1-start_1);
    std::for_each(res.begin(), res.end(), [](long a){printf("%ld ", a);});
    printf("\n");
    printf("IntRootWSqrt took: %ld \n", std::chrono::duration_cast<std::chrono::milliseconds>(duration1).count());*/

    FirstIntRoots rf2;
    FindPrimeRoots<FirstIntRoots> prs2;
    auto start_2 = std::chrono::high_resolution_clock::now();
    std::vector<long> res2 = prs2(k, rf2);
    auto end_2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::milliseconds>(end_2-start_2);
    std::for_each(res2.begin(), res2.end(), [](long a){printf("%ld ", a);});
    printf("\n");
    printf("FirstIntRoots took: %ld \n", std::chrono::duration_cast<std::chrono::milliseconds>(duration2).count());

    return 0;
}
