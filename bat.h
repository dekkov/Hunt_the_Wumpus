#include "event.h"
#include <iostream>

using namespace std;

#ifndef BAT_H
#define BAT_H

class Bats : public Event{
    protected:
    public:
        Bats();
        char print_char();
        void encounter();
        void percept();
        
};

#endif