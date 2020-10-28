#ifndef A_CARD_H
#define A_CARD_H

#include <vector>
#include <string>
#include "GameBase.h"

/*The aCard class contains two vectors, Suit and Value. These vectors will only ever be used when a new deck is created.
The Suit vector contains the suits, while the Value vector contains the vector. The string fullCard represents that actual
representation of the card, a combination of Suit and Value. However, the card only ever represents something when
the conversion operator in the aDeckOfCards is called (and therefore, either SetCardNoReplace or SetCardReplace). */
class aCard : public GameBase{

public:
	vector<string> Suit{ "S", "H", "D", "C" };
	vector<string> Value{ "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J",
						"Q", "K" };

	void SetCardNoReplace(vector<string>& deck);
	void SetCardReplace(vector<string> deck);
	string GetCard();
private:
	string fullCard;
};
#endif
