//
// Created by Reid Russell on 5/21/20.
//

#ifndef PLURAL_BUS_PLAYER_H
#define PLURAL_BUS_PLAYER_H


class Player {
private:
    int balance;

public:
    Player(int bal){balance = bal;};

    void subtract_bal(int delta){balance -= delta;};
    void add_bal(int delta){balance += delta};
};


#endif //PLURAL_BUS_PLAYER_H
