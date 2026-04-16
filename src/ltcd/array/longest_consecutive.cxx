#include "longest_consecutive.hxx"

#include <algorithm>
#include <unordered_set>

int LongestConsecutive::solution(std::vector<int>& nums)
{
    if (nums.empty())
    {
        return 0;
    }

    std::unordered_set<int> values(nums.begin(), nums.end());
    int longest = 0;

    for (int num : values)
    {
        if (values.find(num - 1) == values.end())
        {
            int current = num;
            int length = 1;
            while (values.find(current + 1) != values.end())
            {
                current += 1;
                length += 1;
            }
            longest = std::max(longest, length);
        }
    }

    return longest;
}
