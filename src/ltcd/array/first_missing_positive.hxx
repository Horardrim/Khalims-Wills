#ifndef FIRST_MISSING_POSITIVE_HXX
#define FIRST_MISSING_POSITIVE_HXX

#include <ltcd/array/first_missing_positive.hxx>
#include <vector>

class FirstMissingPositive
{
public:
    FirstMissingPositive() = default;
    ~FirstMissingPositive() = default;
    int solution(std::vector<int>& nums);
};

#endif
