#include <iostream>
#include <string>

bool split_email(const std::string& email, std::string& user, std::string& domain) {
    const std::size_t at = email.find('@');

    if (at == std::string::npos || at != email.rfind('@') ||
        at == 0 || at == email.size() - 1)
        return false;

    user = email.substr(0, at);
    domain = email.substr(at + 1);
    if (domain.find('.') == std::string::npos)
        return false;

    return true;
}

int main() {
    std::string email, user, domain;
    std::cout << "E-mail: ";
    std::getline(std::cin, email);

    if (split_email(email, user, domain))
        std::cout << "korisnik: " << user << ", domena: " << domain << '\n';
    else
        std::cout << "neispravna adresa\n";
}
