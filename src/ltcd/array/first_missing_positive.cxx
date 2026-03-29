#include "first_missing_positive.hxx"
#include <algorithm>

int FirstMissingPositive::solution(std::vector<int>& nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] <= 0 || nums[i] > n)
        {
            nums[i] = n + 1;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        int num = std::abs(nums[i]);
        if (num <= n)
        {
            nums[num - 1] = -std::abs(nums[num - 1]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}
