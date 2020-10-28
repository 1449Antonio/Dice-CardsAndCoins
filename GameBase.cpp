#include <iostream>
using namespace std;
#include "GameBase.h"

/*Because this is static, I declared it once again in this file. The function below, when called from the main function,
sets the seed for the random object. Because the random object is static, the seed will remain throughout the course of 
the program's run*/
Random GameBase::random;

void GameBase::SetSeed(int seed)
{
	random.Seed(seed);
}
