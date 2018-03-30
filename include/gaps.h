#ifndef GAPS_H
#define GAPS_H

#include <bits/stdc++.h>

class Gaps {
  public:
    static std::vector<long long> fibonacci(long long max);
    static std::vector<long long> catalan(long long max);
    static std::vector<long long> shellsort(std::vector<long long> vector,
        std::vector<long long> gaps);
};

#endif
