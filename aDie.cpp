#include <iostream>
#include "aDie.h"
using namespace std;


aDie::operator int()
{
	/* This conversion function calls the Rand function and returning whatever value
	was used. In this case, if, in the main object, d1 * d2 was used, or d1 + d2 was used, it'll call the conversion
	function for both d1 and d2, add the values of each, and then return that final value */
	face = (random.Rand() % 6) + 1;
	return face;
}
