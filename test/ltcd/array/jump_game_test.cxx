#include "jump_game_test.hxx"

#include <assert.h>

void JumpGameTest::execute()
{
    canReachCase();
    cannotReachCase();
    noStepsTest();
}

void JumpGameTest::canReachCase()
{
    int steps[] = {3, 1, 2, 3, 1};
    assert(JumpGame().solution(steps, 5));
}

void JumpGameTest::cannotReachCase()
{
    int steps[] = {3, 1, 0, 0, 1};
    assert(!JumpGame().solution(steps, 5));
}


void JumpGameTest::noStepsTest()
{
    assert(!JumpGame().solution(nullptr, 0));
}
