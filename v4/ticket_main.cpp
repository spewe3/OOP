#include <iostream>
#include "ticket.h"

int Ticket::counter = 0;

Ticket::Ticket(std::string name)
    : concert(name) {
    counter++;
    number = counter;
}

int Ticket::issued() {
    return counter;
}

void Ticket::print() const {
    std::cout << concert << " - Ticket number: "
              << number << '\n';
}