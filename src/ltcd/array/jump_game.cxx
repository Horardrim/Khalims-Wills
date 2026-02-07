#include "jump_game.hxx"

#include <algorithm>

bool JumpGame::solution(int * array, const int & length)
{
    int rightMost = 0;
    for (int i = 0; i < length; ++i)
    {
        if (i <= rightMost)
        {
            rightMost = std::max(rightMost, i + array[i]);
            if (rightMost >= length)
            {
                return true;
            }
        }
    }

    return false;
}
