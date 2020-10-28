#include <iostream>
using namespace std;
#include "aDeckOfCards.h"

int seedValue;
aDeckOfCards::aDeckOfCards()
{
	aCard temp;

	deck.resize(52);


	int i, j = 0, x = 0;
	/*temp was created in order to call the two vectors that the aCard class contains, Suit and Value. In essence, those
	two vectors will only ever be called through the creation of a new aDeckOfCards class (since this is a constructor).
	Therefore, it adds a string of the face of a card to each index, until all cards in a standard deck of cards is used*/
	for (i = 0; i < 52; i++)
	{
		if (j == 13)
		{
			j = 0;
			x++;
		}
		deck.at(i) = temp.Value.at(j) + "-" + temp.Suit.at(x);

		j++;

	}
}

/* This conversion function creates a temporary object known as card, and then calls upon the SetCardReplace function that
card contains, before returning the card (and therefore a randomized string representing a card from the deck) to the
aCard object created in main*/
aDeckOfCards::operator aCard()
{
	aCard card;
	card.SetCardReplace(deck);
	return card;
}

/*This function is similar to the one above. The parameter N tells us that each hand will have 5 cards, and thus creates
a vector for that hand of that size. It then calls up the SetCardNoReplace function, which returns a card with a face value,
to each index of the hand*/
vector<aCard> aDeckOfCards::draw(int N)
{
	vector<aCard>hand(N);

	unsigned int i;

	for (i = 0; i < hand.size(); i++)
		hand.at(i).SetCardNoReplace(deck);
	return hand;
}

