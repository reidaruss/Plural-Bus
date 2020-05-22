//
// Created by Reid Russell on 5/21/20.
//

#ifndef PLURAL_BUS_BLACKJACK_H
#define PLURAL_BUS_BLACKJACK_H

#include "Game.h"
#include "Deck.h"
#include "Card.h"

class BlackJack : public Game{
private:
    int num_decks;
    Deck d;
    bool disp_count;

    int min_bet;
    int max_bet;

public:
    BlackJack(int num_d, bool display_count, int minBet, int maxBet);

    void start();
    void deal();
    void prompt_user();
    void display_state();

};


#endif //PLURAL_BUS_BLACKJACK_H
