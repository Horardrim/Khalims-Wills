#ifndef ARRAY_PARTITION_TEST_HXX
#define ARRAY_PARTITION_TEST_HXX

#include <ltcd/array/array_partition.hxx>

class TestArrayPartition
{
public:
    TestArrayPartition() = default;
    ~TestArrayPartition() = default;
    void execute();

private:
    void normalCase();
    void emptyArrayCase();
    void targetHitCase();
};

#endif
