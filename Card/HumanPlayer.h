#ifndef _COMPUTERPLAYER_
#define _COMPUTERPLAYER_

#include <ostream>
#include <istream>

#include "Player.h"

using namespace std;

class HumanPlayer : public Player{
public:
	HumanPlayer();
	Suit getSuit() const;
	Rank getRank() const;
private:
};

#endif