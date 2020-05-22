//
// Created by Reid Russell on 5/19/2020.
//

#ifndef PLURAL_BUS_DECK_H
#define PLURAL_BUS_DECK_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

#include "Card.h"


class Deck {
private:
    std::vector<Card> deck;
    int num_decks;
    int num_cards;

public:
    Deck();

    std::vector<Card> get_deck(){return deck;}
    void shuffle_deck();
    void print_deck();
    void add_deck();
    int get_num_decks(){return num_decks;}
    int get_num_cards(){return num_cards;}
};


#endif //PLURAL_BUS_DECK_H
