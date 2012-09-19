#include "Card.h"
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using std::vector;
using std::random_shuffle;

class Dealer {
public:
	Dealer();
	void createDeck(Card deck[]);
	void shuffleDeck(Card deck[]); //This function will shuffle the deck created in Dealer.createDeck
	int getCardValue();
private:
	int cardsvalue;
	Card deck[52];
};
