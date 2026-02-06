#include "array_partition_test.hxx"

#include <assert.h>

void TestArrayPartition::execute()
{
    normalCase();
    emptyArrayCase();
    targetHitCase();
}

void TestArrayPartition::normalCase()
{
    int array[9] = {7, 12, 5, 7, 8, 3, 1, 4, 2};
    ArrayPartition().solution(9, array, 9);
    assert(array[0] == 7);
}

void TestArrayPartition::emptyArrayCase()
{
    int * array = nullptr;
    ArrayPartition().solution(0, array, 0);
    assert(array == nullptr);
}

void TestArrayPartition::targetHitCase()
{
    int array[9] = {7, 12, 5, 7, 8, 3, 1, 4, 2};
    ArrayPartition().solution(12, array, 9);
    assert(array[0] == 7);
    assert(array[1] == 5);
}
