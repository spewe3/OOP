#include <iostream>

#include "Game.h"
#include "Enemy.h"
#include "Weapon.h"

int main() {

    Enemy e1("Zombie");
    Enemy e2("Skeleton");

    Weapon w1("Sword");
    Weapon w2("Bow");

    Game game(e1);

    return 0;
}