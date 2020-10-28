#include <iostream>
using namespace std;

#include "Random.h"

/*This function is called by the child classes, returning a random integer based on the seed value that was set in the 
beginning of the program's run*/
int Random::Rand()
{
	return rand();
}

/*This function is called by the GameBase class, which, by extension, was called by the main function at the beginning of
the program's run. Based on the seed value that the user inputted, main functions calls the GameBase's function, since
GameBase contains the static random object, and that function calls this function. Due to the static nature of the object,
the seed value that is set -- which is only set once -- will remain throughout the entire program, and any child class 
function that uses this static object will have used the same seed*/
void Random::Seed(int seed)
{
	srand(seed);
}
