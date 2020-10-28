#include <iostream>
using namespace std;

#include "aCard.h"

/* In the SetCardReplace function, it takes the deck object that was originally created in
main. It calls the random object's Rand function, before moduling it based on the number of cards in the deck.
The card object that was created for what is being drawn therefore contains the string of one of the cards of the deck*/

void aCard::SetCardReplace( vector<string> deck)
{
	int randomVal;

	randomVal = random.Rand() % deck.size();
	fullCard = deck.at(randomVal);

}

/*The function does the same as SetCardReplace, however, it needs to ensure that there is no replacement. Therefore,
after 52 draws, the deck would be empty. To accomplish this, the parameter deck needed to be a pass by reference. The
erase function would then be called, erasing whatever the index that was randomized with the rand function, hence the use
of "randomVal" in deck.at and deck.erase. */
void aCard::SetCardNoReplace(vector<string>& deck)
{
	int randomVal;

	randomVal = random.Rand() % deck.size();
	fullCard = deck.at(randomVal);

	deck.erase(deck.begin() + randomVal);
}

// This is used to return the string of the card that the object represents. This is normally used within a print statement
string aCard::GetCard()
{
	return fullCard;
}