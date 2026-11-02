#include <iostream>
#include "Player.h"
#include "Level.h"

Player::Player(Level& l) : level(&l) {
}

void Player::print() const {
    std::cout << "Player is in level:\n";
    level->print();
}