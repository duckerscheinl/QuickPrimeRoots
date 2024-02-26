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
std::vector<long> FindPrimeRoots<RootFinder>::operator()(long k, RootFinder root_finder) {
    if (k<1) return {};
    std::vector<long> res{};
    FindPrimeRoots<RootFinder>::operator()(k,res,root_finder);
    return res;
}

template<class RootFinder>
void FindPrimeRoots<RootFinder>::operator()(long k, std::vector<long> & vec, RootFinder root_finder) {

    std::pair<long,long> roots = root_finder(k);

    if (roots.second == k) vec.push_back(k);
    else
    {
        FindPrimeRoots::operator()(roots.first, vec, root_finder);
        FindPrimeRoots::operator()(roots.second, vec, root_finder);
    }
}


#endif //QUICKPRIMEROOTS_FINDPRIMEROOTS_H
