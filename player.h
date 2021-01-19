#pragma once
#include "hand.h"
#include "card.h"
#include <vector>
class Player:public Hand {
public:
	void play(Deck&);
};