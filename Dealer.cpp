#include "Dealer.h"

Dealer::Dealer() {
	//More stuff
}

void Dealer::createDeck(Card deck[])
{
	int i = 0;
	for(int suit = 0; suit < 4; suit++) {
		for(int face = 0; face < 13; face++) {
			deck[i].setSuit(suit);
			deck[i].setValue(face);
			i = i + 1;
		}
	}
}

void Dealer::shuffleDeck(Card deck[])
{
	srand(time(0));
	random_shuffle(deck[0],deck[52]);
}