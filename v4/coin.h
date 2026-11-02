#ifndef COIN_H
#define COIN_H

class Coin {
    int value;

    static int counter;

public:
    Coin(int v);

    ~Coin();

    static int remaining();
};

#endif