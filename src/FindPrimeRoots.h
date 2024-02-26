//
// Created by lucas on 25.02.24.
//

#ifndef QUICKPRIMEROOTS_FINDPRIMEROOTS_H
#define QUICKPRIMEROOTS_FINDPRIMEROOTS_H

#include <vector>

template<class RootFinder>
class FindPrimeRoots {

public:

    std::vector<long> operator()(long, RootFinder);

    void operator()(long, std::vector<long>&, RootFinder);

};

template<class RootFinder>
std::vector<long> FindPrimeRoots<RootFinder>::operator()(long k, RootFinder rf) {
    if (k<1) return {};
    std::vector<long> res{};
    FindPrimeRoots<RootFinder>::operator()(k,res,rf);
    return res;
}

template<class RootFinder>
void FindPrimeRoots<RootFinder>::operator()(long k, std::vector<long> & vec, RootFinder rf) {

    std::pair<long,long> roots = rf(k);

    if (roots.second == k) vec.push_back(k);
    else
    {
        FindPrimeRoots::operator()(roots.first, vec, rf);
        FindPrimeRoots::operator()(roots.second, vec, rf);
    }
}


#endif //QUICKPRIMEROOTS_FINDPRIMEROOTS_H
