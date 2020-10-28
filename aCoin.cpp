#include <iostream>
using namespace std;

#include "aCoin.h"



/* This is supposed to represent a coin toss. It calls the rand function, which returns either 0 or 1. If it's 0, then the
result of the coin toss was heads, otherwise, it was tails. It then returns either "H" or "T" respectively. */
aCoin::operator string()
{
	int toss;
	toss = random.Rand() % 2;

	if (toss == 0)
	{
		side = "H";
	}
	else
	{
		side = "T";
	}
	return side;
}

