#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Level.h"

class Game {
    Level level;
    Player player;

public:
    Game(Enemy first);

    void print() const;
};

#endif