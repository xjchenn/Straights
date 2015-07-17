#ifndef _GAME_
#define _GAME_

#include <ostream>
#include <istream>

#include "Player.h"
#include "Table.h"
#include "Deck.h"

using namespace std;

const int MAX_SCORE(80);

class Game{
public:
    Game(vector<Player*>, Table&, Deck&);
    ~Game();
    void startNewRound();
    void continueRound();
    bool hasEnded() const;
    vector<Card> getPlayerHand() const;
    vector<Card> getTableCards() const;
private:
    void printScores() const;
    int getStarterPlayerNumber() const;
    void dealDeck();
    void checkWinCondition();
    void printWinners() const;
    bool endFlag_;
    Player* convertToComputerPlayer(Player*);
    Table table_;
    Deck deck_;
    vector<Player*> players_;
};

#endif
