#include <iostream>
#include "Deck.h"
#include "Card.h"

#include <vector>
#include <string>

// TODO: Create 'Game' abstract class for game modularity
// TODO: Create 'NL_Holdem' class that implements game class (subclass)
// TODO: Create 'Poker_Deck' class for creation and manipulation of deck
// TODO: Create 'Black_Jack' class for blackjack implementation of game
// TODO: Create 'Black_Jack_Deck' class with different deck sizes
// TODO: Create 'Deck' class that will act as generic deck that holdem deck and blackjack deck can extend
// TODO: Create 'Card' class for each card
int main() {

    Deck d;
    std::vector<Card> v = d.get_deck();
    for(int i = 0; i < v.size();i++)
    {
        char s = ' ';
        if(v[i].get_suit() == 0)
            s = 'C';
        else if(v[i].get_suit() == 1)
            s = 'D';
        else if(v[i].get_suit() == 2)
            s = 'S';
        else if(v[i].get_suit() == 3)
            s = 'H';

        char n = ' ';
        if(v[i].get_name() == 11)
            n = 'J';
        else if(v[i].get_name() == 12)
            n = 'Q';
        else if(v[i].get_name() == 13)
            n = 'K';
        else if(v[i].get_name() == 1)
            n = 'A';
        else
            n = v[i].get_name();
        std::cout<<n << s << std::endl;
    }
    return 0;
}
