#include <iostream>
#include <vector>

int main() {
    std::size_t n;
    std::cout << "Broj dana: ";
    std::cin >> n;

    if (n == 0) {
        std::cerr << "Potrebno je unijeti barem jedan dan.\n";
        return 1;
    }

    std::vector<double> temperature(n);
    std::cout << "Temperature: ";
    for (std::size_t i = 0; i < n; ++i)
        std::cin >> temperature[i];

    std::vector<double> promjene;
    for (auto it = temperature.cbegin(); it + 1 != temperature.cend(); ++it)
        promjene.push_back(*(it + 1) - *it);

    temperature.resize(7, temperature.back());

    std::cout << "Promjene: ";
    for (double p : promjene)
        std::cout << p << ' ';

    std::cout << "\nIzvjestaj: ";
    for (double t : temperature)
        std::cout << t << ' ';
    std::cout << '\n';
}
