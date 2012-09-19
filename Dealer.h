#include "Card.h"

class Dealer {
public:
	Dealer();
	void createDeck();
	int getCardValue();
private:
	int cardsvalue;
	Card deck[52];
};
