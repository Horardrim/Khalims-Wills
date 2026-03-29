#ifndef FIRST_MISSING_POSITIVE_TEST_HXX
#define FIRST_MISSING_POSITIVE_TEST_HXX

#include <ltcd/array/first_missing_positive.hxx>

class TestFirstMissingPositive
{
public:
    TestFirstMissingPositive() = default;
    ~TestFirstMissingPositive() = default;
    void execute();
private:
    void normalCase();
    void emptyArrayCase();
    void allPositiveCase();
};

#endif
