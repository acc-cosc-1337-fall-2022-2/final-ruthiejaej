//
#ifndef DIE_H
#define DIE_H

#include <iostream>

class Die
{
    public:

    void roll();//randomly assigns a value to roll_value in the range 1-6
    int rolled_value()const; //returns roll_value

private:
    int roll_value; //stores a random assigned value
    int sides{6};



};

#endif