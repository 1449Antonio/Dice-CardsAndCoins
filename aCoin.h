#ifndef A_COIN_H
#define A_COIN_H

#include <string>
using namespace std;
#include "GameBase.h"

/* This class contains a conversion function and a string representing either heads
or tails. */
class aCoin : public GameBase {
public:
	operator string();
private:
	string side;
};

#endif

