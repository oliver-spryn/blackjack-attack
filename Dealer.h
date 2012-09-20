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
	void createDeck();
	int getCardValue();

private:
	void displayMimimiumBettingValues();
	int cardsvalue;
	Card deck[52];
};
