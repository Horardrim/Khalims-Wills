#include "array_partition.hxx"

void ArrayPartition::solution(const int & target, int * array, const int & length)
{
    if (length <= 0)
    {
        return;
    }

    int left = 0, middle = 0, right = length - 1;

    while (middle <= right)
    {
        if (array[middle] < target)
        {
            int t = array[middle];
            array[middle] = array[left];
            array[left] = t;
            ++left;
            ++middle;
        }
        else if (array[middle] == target)
        {
            ++middle;
        }
        else
        {
            int t = array[middle];
            array[middle] = array[right];
            array[right] = t;
            --right;
        }
    }
}
