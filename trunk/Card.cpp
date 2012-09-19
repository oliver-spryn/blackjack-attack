#include "Card.h"
#include <stdexcept>

string Card::suitName(Suit s) {
	switch(s) {
		case clubs: return "Clubs";
		case diamonds: return "Diamonds";
		case hearts: return "Hearts";
		case spades: return "Spades";
		default: throw std::out_of_range("Suit value out of range");
	}
}

string Card::valueName(Value v) {
	switch(v) {
		case ace: return "Ace";
		case deuce: return "Deuce";
		case trey: return "Trey";
		case four: return "Four";
		case five: return "Five";
		case six: return "Six";
		case seven: return "Seven";
		case eight: return "Eight";
		case nine: return "Nine";
		case ten: return "Ten";
		case jack: return "Jack";
		case queen: return "Queen";
		case king: return "King";
		default: throw std::out_of_range("Face value out of range");
	}
}

Card::Card(Suit suit, Value facevalue)
{
	Card::suit=suit;
	Card::faceValue=facevalue;
};

void Card::setSuit(int s) {
	switch (s) {
		case 0:
			suit = clubs;
			break;
		case 1:
			suit = diamonds;
			break;
		case 2:
			suit = hearts;
			break;
		case 3:
			suit = spades;
			break;
		default:
			Display::coloredText("Error allocting cards.",12);
			break;
	}
}

void Card::setValue(int v) {
	switch(v) {
		case 0:
			faceValue = ace;
			break;
		case 1:
			faceValue = deuce;
			break;
		case 2:
			faceValue = trey;
			break;
		case 3:
			faceValue = four;
			break;
		case 4:
			faceValue = five;
			break;
		case 5:
			faceValue = six;
			break;
		case 6:
			faceValue = seven;
			break;
		case 7:
			faceValue = eight;
			break;
		case 8:
			faceValue = nine;
			break;
		case 9:
			faceValue = ten;
			break;
		case 10:
			faceValue = jack;
			break;
		case 11:
			faceValue = queen;
			break;
		case 12:
			faceValue = king;
			break;
		default:
			Display::coloredText("Error allocting cards.",12);
			break;
	}
}