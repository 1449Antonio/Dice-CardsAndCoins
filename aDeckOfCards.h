#ifndef A_DECK_OF_CARDS_H
#define A_DECK_OF_CARDS_H

#include <string>
#include <vector>
#include "aCard.h"

/*The aDeckOfCards's class purpose is to create a deck with a string of cards, and then either draw a single card,
or draw a full hand */
class aDeckOfCards {
public:
	aDeckOfCards();
	vector<aCard> draw(int N);
	operator aCard();

private:
	vector<string> deck;
};

#endif
