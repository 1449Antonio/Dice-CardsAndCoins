#ifndef GAME_BASE_H
#define GAME_BASE_H

#include "Random.h"
/* This is the header for the parent class. It contains the object random, of type Random (a separate class) and a 
function that is only called from the main function once to set the seed value to the static random object. Due to the 
nature of inheritance, every child class can use the random object */
class GameBase {
public:
	void SetSeed(int seed);
protected:
	static Random random;
};

#endif
