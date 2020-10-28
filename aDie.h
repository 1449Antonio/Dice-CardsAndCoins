#ifndef A_DIE_H
#define A_DIE_H
using namespace std;
#include "GameBase.h"

/*This simple class contains a conversion function, and an int representing the
face of the roll (or sum or product of rolls). */
class aDie : public GameBase {
public:
	operator int();
private:
	int face = 0;
};

#endif

