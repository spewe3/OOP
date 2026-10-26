#include <iostream>
#include <string>

std::string with_separators(std::string digits) {
    const std::size_t first_digit = (!digits.empty() && digits[0] == '-') ? 1 : 0;
    for (std::size_t pos = digits.size(); pos > first_digit + 3; pos -= 3)
        digits.insert(pos - 3, ".");
    return digits;
}

std::string without_separators(std::string text) {
    std::size_t pos;
    while ((pos = text.find('.')) != std::string::npos)
        text.erase(pos, 1);
    return text;
}

int main() {
    std::string number;
    std::cout << "Broj: ";
    std::cin >> number;

    const std::string formatted = with_separators(number);
    std::cout << "S tockama: " << formatted << '\n';
    std::cout << "Bez tocaka: " << without_separators(formatted) << '\n';
}
