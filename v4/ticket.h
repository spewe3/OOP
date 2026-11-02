#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
    std::string concert;
    int number;

    static int counter;

public:
    Ticket(std::string name);

    static int issued();

    void print() const;
};

#endif