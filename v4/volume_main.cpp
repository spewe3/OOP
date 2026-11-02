#include <iostream>
#include "volume.h"

int main() {
    Volume v(70);

    std::cout << v.get() << '\n';

    v.up();
    std::cout << v.get() << '\n';

    v.down(30);
    std::cout << v.get() << '\n';

    v.mute();
    std::cout << v.get() << '\n';

    v.unmute();
    std::cout << v.get() << '\n';

    return 0;
}