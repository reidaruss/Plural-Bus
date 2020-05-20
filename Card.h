//
// Created by Reid Russell on 5/19/2020.
//

#ifndef PLURAL_BUS_CARD_H
#define PLURAL_BUS_CARD_H

#include <iostream>


class Card {
private:
    int value;
    int name;
    int suit;


public:
    Card(int val, int n, int s);

    int get_value(){return value;}
    int get_suit(){return suit;}
    int get_name(){return name;}


};


#endif //PLURAL_BUS_CARD_H
