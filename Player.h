#include "Card.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class Player {
public:
	Player();
public:
	void createHand(int i);
	int handValue();
	void hit(int i);
	void doubleDown(int i);

private:
	vector<Card> hand;
};