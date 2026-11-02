#include "coin.h"

int Coin::counter = 0;

Coin::Coin(int v) : value(v) {
    counter++;
}

Coin::~Coin() {
    counter--;
}

int Coin::remaining() {
    return counter;
}