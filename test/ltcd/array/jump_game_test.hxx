#ifndef JUMP_GAME_TEST_HXX
#define JUMP_GAME_TEST_HXX

#include <ltcd/array/jump_game.hxx>

class JumpGameTest
{
public:
    JumpGameTest() = default;
    ~JumpGameTest() = default;

    void execute();

private:
    void canReachCase();
    void cannotReachCase();
    void noStepsTest();
};

#endif
