#include <array>
#include <algorithm>
#include <iostream>

constexpr int DAYS = 7;

double total(const std::array<double, DAYS>& hours) {
    double sum = 0;
    for (double h : hours)
        sum += h;
    return sum;
}

int best_day(const std::array<double, DAYS>& hours) {
    int best = 0;
    for (int i = 1; i < DAYS; ++i)
        if (hours[i] > hours[best])
            best = i;
    return best + 1;
}

int main() {
    std::array<double, DAYS> first_week{};
    std::cout << "Sati za 7 dana: ";
    for (double& h : first_week)
        std::cin >> h;

    std::array<double, DAYS> second_week;
    second_week.fill(1.5);

    std::cout << "Ukupno prvi tjedan: " << total(first_week) << '\n';
    std::cout << "Dan s najvise sati: " << best_day(first_week) << '\n';
    std::cout << std::boolalpha;
    std::cout << "Tjedni su jednaki: " << (first_week == second_week) << '\n';
    std::cout << "Prvi je manji od drugog: " << (first_week < second_week) << '\n';

    std::swap(first_week, second_week);
    std::cout << "Ukupno nakon zamjene: " << total(first_week) << '\n';
}
