#pragma once
#include <iostream>
class Card {
public:
	enum CardSuit {
		Suit_DIAMONDS,//бубны
		Suit_HEARTS,//черви
		Suit_SPADES,//пики
		Suit_CLUBS,//крести
		MAX_SUITS//конец перечисления
	};
	enum CardRank {
		CARD_2,//0
		CARD_3,//1
		CARD_4,//2
		CARD_5,//3
		CARD_6,
		CARD_7,
		CARD_8,
		CARD_9,
		CARD_10,
		CARD_J,//JACK - валет,10
		CARD_Q,//QUEEN - дама,11
		CARD_K,//KING - король,12
		CARD_A,//ACE - туз,13
		MAX_RANK
	};
	Card();
	Card(CardRank, CardSuit);
	void print_card();
	int get_score();
	friend std::ostream& operator<<(std::ostream& out, Card&);
private:
	CardSuit m_suit;
	CardRank m_rank;
};