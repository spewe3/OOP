#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include "Enemy.h"
#include "Weapon.h"

class Level {
    std::vector<Enemy> enemies;
    std::vector<Weapon> weapons;

public:
    Level(Enemy first);

    void addEnemy(Enemy e);
    void addWeapon(Weapon w);

    void print() const;

    bool takeWeapon(Weapon& w);
};

#endif