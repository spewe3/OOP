#ifndef PLAYER_H
#define PLAYER_H

class Level;

class Player {
    Level* level;

public:
    Player(Level& l);

    void print() const;
};

#endif