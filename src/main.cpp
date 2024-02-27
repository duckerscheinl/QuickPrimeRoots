#include <iostream>
#include "FindPrimeRoots.h"
#include "FastSmart.h"
#include "FastNaive.h"
#include <cstdio>
#include <chrono>


int main(int argc, char* argv[]) {

    long k = 0;
    if (argc == 1) printf("Please enter a number to find the prime roots!\n");
    else if(argc > 2) printf("Please only enter one number at a time!\n");
    else {
        k = std::stoll(argv[1]);
    }

    FastSmart rf3;
    FindPrimeRoots<FastSmart> prs3;
    auto start_3 = std::chrono::high_resolution_clock::now();
    std::vector<long> res3 = prs3(k, rf3);
    auto end_3 = std::chrono::high_resolution_clock::now();
    auto duration3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_3-start_3);
    std::for_each(res3.begin(), res3.end(), [](long a){printf("%ld ", a);});
    printf("\n");
    printf("FastSmart took: %ld \n", std::chrono::duration_cast<std::chrono::nanoseconds>(duration3).count());

    FastNaive rf;
    FindPrimeRoots<FastNaive> prs;
    auto start_1 = std::chrono::high_resolution_clock::now();
    std::vector<long> res = prs(k, rf);
    auto end_1 = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_1-start_1);
    std::for_each(res.begin(), res.end(), [](long a){printf("%ld ", a);});
    printf("\n");
    printf("FastNaive took: %ld \n", std::chrono::duration_cast<std::chrono::nanoseconds>(duration1).count());

    return 0;
}
