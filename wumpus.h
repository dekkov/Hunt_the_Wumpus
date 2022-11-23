#include "event.h"
#include <iostream>
#include <vector>

using namespace std;

#ifndef WUMPUS_HPP
#define WUMPUS_HPP

class Wumpus : public Event{
    protected:
        bool is_dead;
    public:
        Wumpus();
        char print_char();
        void encounter();
        void percept();
        void killed(bool);
};

#endif