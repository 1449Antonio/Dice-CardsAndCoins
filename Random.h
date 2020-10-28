#ifndef RANDOM_H
#define RANDOM_H

#include <string>
using namespace std;
/*This class simply coontains two functions, Rand and Seed. The Seed function is responsible for setting the seed value
for the object, while the Rand function is responsible for returning a random integer. */
class Random {

public:
	void Seed(int seed);
	int Rand();
};

#endif