#include "first_missing_positive_test.hxx"

#include <assert.h>
#include <vector>

void TestFirstMissingPositive::execute()
{
    normalCase();
    emptyArrayCase();
    allPositiveCase();
}

void TestFirstMissingPositive::normalCase()
{
    std::vector<int> nums = {1, 2, 0};
    int result = FirstMissingPositive().solution(nums);
    assert(result == 3);
}

void TestFirstMissingPositive::emptyArrayCase()
{
    std::vector<int> nums = {};
    int result = FirstMissingPositive().solution(nums);
    assert(result == 1);
}

void TestFirstMissingPositive::allPositiveCase()
{
    std::vector<int> nums = {1, 2, 3};
    int result = FirstMissingPositive().solution(nums);
    assert(result == 4);
}
