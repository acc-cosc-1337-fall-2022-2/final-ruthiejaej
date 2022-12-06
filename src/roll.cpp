//
#include "die.h"
#include "roll.h"

using std::cin;
using std::cout;

Roll::Roll(Die& d1, Die& d2): die1(d1), die2(d2)
{
    
}

void Roll::roll_die()
{
    die1.roll();
    die2.roll();
    int roll_1 = die1.rolled_value();
    int roll_2 = die2.rolled_value();
    value = roll_1 + roll_2;
};

int Roll::roll_value() const
{
    return value;
};