//
// Created by Reid Russell on 5/19/2020.
//

#include "Deck.h"


Deck::Deck()
{
    int suits[4] = {0,1,2,3};
    int names[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            Card c(names[j],names[j],suits[i]);
            deck.push_back(c);
        }
    }
    num_decks = 1;
    num_cards = 52;
}

void Deck::print_deck()
{
    for(int i = 0; i < deck.size();i++)
    {
        std::string s = " ";
        if(deck[i].get_suit() == 0)
            s = "C";
        else if(deck[i].get_suit() == 1)
            s = "D";
        else if(deck[i].get_suit() == 2)
            s = "S";
        else if(deck[i].get_suit() == 3)
            s = "H";

        std::string n = " ";
        if(deck[i].get_name() == 11)
            n = "J";
        else if(deck[i].get_name() == 12)
            n = "Q";
        else if(deck[i].get_name() == 13)
            n = "K";
        else if(deck[i].get_name() == 1)
            n = "A";
        else
            n = std::to_string(deck[i].get_name());
        std::cout<<n << s << std::endl;
    }
}

void Deck::shuffle_deck()
{
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

void Deck::add_deck()
{
    int suits[4] = {0,1,2,3};
    int names[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            Card c(names[j],names[j],suits[i]);
            deck.push_back(c);
        }
    }
    num_decks ++;
    num_cards += 52;
}