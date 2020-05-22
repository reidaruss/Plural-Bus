//
// Created by Reid Russell on 5/21/20.
//

#include "BlackJack.h"


BlackJack::BlackJack(int num_d, bool display_count, int minBet, int maxBet)
{
    num_decks = num_d;
    disp_count = display_count;
    min_bet = minBet;
    max_bet = maxBet;

    // Add the rest of the decks
    for(int i = 1; i < num_decks; i ++)
        d.add_deck();

    d.shuffle_deck();

}

void BlackJack::start()
{

}

void BlackJack::deal()
{

}

void BlackJack::prompt_user()
{
    std::cout << "Would you like to hit(h), stand(s), or double down(dd)?" << std::endl;
}

void display_state()
{

}
