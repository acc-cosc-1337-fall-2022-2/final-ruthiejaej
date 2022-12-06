#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test 1 die")
{
	Die die;

	die.roll();
	bool pass = die.rolled_value() >= 1 && die.rolled_value() <= 6;

	REQUIRE(pass);
}

TEST_CASE("Test 1 die roll x's 10"){
	Die die;

	for(int i = 0; i < 10; i++)
	{
		die.roll();
		bool pass  = die.rolled_value() >= 1 && die.rolled_value() <= 6;

		REQUIRE(pass);
	}
}

TEST_CASE("2 DICE"){

	Die d1;
	Die d2;
	Roll value(d1,d2);

	//roll_value(d1,d2);


	for (int i = 0; i<10; i++)
	{
		value.roll_die();

		REQUIRE(((value.roll_value() >= 2)&& (value.roll_value() <= 12)) == true);
	} 
	
}


	