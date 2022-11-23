#include "event.h"
#include <iostream>

using namespace std;

#ifndef PIT_H
#define PIT_H

class Pit : public Event{
    protected:
    public:
        Pit();
        char print_char();
        void encounter();
        void percept();

};

#endif