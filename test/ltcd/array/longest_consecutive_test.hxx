#ifndef LONGEST_CONSECUTIVE_TEST_HXX
#define LONGEST_CONSECUTIVE_TEST_HXX

#include <ltcd/array/longest_consecutive.hxx>

class TestLongestConsecutive
{
public:
    TestLongestConsecutive() = default;
    ~TestLongestConsecutive() = default;

    void execute();

private:
    void normalCase();
    void emptyArrayCase();
    void duplicateValuesCase();
};

#endif
