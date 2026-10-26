#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split_words(const std::string& text) {
    std::vector<std::string> words;
    std::size_t start = 0;

    while (true) {
        start = text.find_first_not_of(' ', start);
        if (start == std::string::npos)
            break;

        const std::size_t end = text.find(' ', start);
        words.push_back(text.substr(start, end - start));
        if (end == std::string::npos)
            break;
        start = end + 1;
    }
    return words;
}

int main() {
    std::string text;
    std::cout << "Recenica: ";
    std::getline(std::cin, text);
    const std::vector<std::string> words = split_words(text);

    std::cout << "broj rijeci: " << words.size() << '\n';
    if (words.empty())
        return 0;

    std::string longest = words[0];
    std::string joined;
    std::string alphabetically_first = words[0];
    for (std::size_t i = 0; i < words.size(); ++i) {
        if (words[i].size() > longest.size())
            longest = words[i];
        if (words[i] < alphabetically_first)
            alphabetically_first = words[i];
        if (i != 0)
            joined += '-';
        joined += words[i];
    }

    std::cout << "najdulja: " << longest << '\n';
    std::cout << "rijeci obrnutim redoslijedom: ";
    for (auto it = words.crbegin(); it != words.crend(); ++it)
        std::cout << *it << (it + 1 == words.crend() ? '\n' : '-');
    std::cout << "rijeci spojene: " << joined << '\n';
    std::cout << "prva po abecedi: " << alphabetically_first << '\n';
}
