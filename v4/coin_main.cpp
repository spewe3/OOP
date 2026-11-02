#include <iostream>
#include "coin.h"

int main() {
    std::cout << Coin::remaining() << '\n';

    Coin c1(10);
    Coin c2(20);

    std::cout << Coin::remaining() << '\n';

    {
        Coin c3(50);

        std::cout << Coin::remaining() << '\n';
    }

    std::cout << Coin::remaining() << '\n';

    return 0;
}