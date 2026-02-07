#include "ltcd/array/array_partition_test.hxx"
#include "ltcd/array/jump_game_test.hxx"

#include <iostream>

int main(int argc, char ** argv)
{
    TestArrayPartition().execute();
    JumpGameTest().execute();
    std::cout << "Test Done." << std::endl;
    return 0;
}
