#include "longest_consecutive_test.hxx"

#include <assert.h>
#include <vector>

void TestLongestConsecutive::execute()
{
    normalCase();
    emptyArrayCase();
    duplicateValuesCase();
}

void TestLongestConsecutive::normalCase()
{
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = LongestConsecutive().solution(nums);
    assert(result == 4);
}

void TestLongestConsecutive::emptyArrayCase()
{
    std::vector<int> nums;
    int result = LongestConsecutive().solution(nums);
    assert(result == 0);
}

void TestLongestConsecutive::duplicateValuesCase()
{
    std::vector<int> nums = {1, 2, 0, 1};
    int result = LongestConsecutive().solution(nums);
    assert(result == 3);
}
