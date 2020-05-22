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
    int buy_in = 0;
    std::cout<< "How much would you like to buy in?" << std::endl;
    std::cin>>buy_in;

    Player p(buy_in);

    std::vector<Player> players;
    players.push_back(p);
    run(players);
}

void BlackJack::run(std::vector<Player> players)
{
    deal();
    display_state();
    prompt_user();

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

int check_value(std::vector<Card> v)
{

}
