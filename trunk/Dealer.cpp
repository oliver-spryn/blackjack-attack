#include <iostream>

#include "Config.h"
#include "Dealer.h"
#include "Display.h";

using std::cout;
using std::endl;

Dealer::Dealer() {
	cout << Config::GAME_NAME
		 << endl << endl
		 << Config::WELCOME_STRING
		 << endl;

	this->displayMimimiumBettingValues();
}

void Dealer::displayMimimiumBettingValues() {
	vector<int> bettingValues = Config::MINIMUM_BETTING_VALUES;
	int numberOfChoices = bettingValues.size();

	for (int i = 0; i < numberOfChoices; i ++) {
		cout << "[" << i + 1 << "] "
			 << "$" << bettingValues[i]
		     << " minimum bet"
			 << endl;
	}
}

void Dealer::createDeck()
{

};