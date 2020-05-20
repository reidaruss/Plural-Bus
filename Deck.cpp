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

}