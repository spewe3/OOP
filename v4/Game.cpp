#include <iostream>
#include "Game.h"

Game::Game(Enemy first)
    : level(first), player(level) {
}

void Game::print() const {
    std::cout << "GAME\n";

    player.print();
}