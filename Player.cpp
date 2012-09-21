#include "Player.h"

Player::Player(void) {
	//Stuff
}

void Player::createHand(int i) {
	hand.push_back(placeholder); //placeholder will be replaced with a function in dealer
	hand.push_back(placeholder); //that allows the player class to remove a card from deck.
}

int Player::handValue() {
	int value = 0;
	for (int i = 0; i < hand.size(); i++) {
		int v = hand[i].calculateValue(hand[i].getValue()); //This will return the value of the card at i in hand
		value = value + v;
	}
	return value;
}

void Player::hit(int i) {
	hand.push_back(placeholder);
}

void Player::doubleDown(int i) {
	hand.push_back(placeholder);
}