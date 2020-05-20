//
// Created by Reid Russell on 5/19/2020.
//

#ifndef PLURAL_BUS_DECK_H
#define PLURAL_BUS_DECK_H

#include <iostream>
#include <vector>
#include <string>

#include "Card.h"


class Deck {
private:
    std::vector<Card> deck;

public:
    Deck();

    std::vector<Card> get_deck(){return deck;}
};


#endif //PLURAL_BUS_DECK_H
