#include "event.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#ifndef GOLD_HPP
#define GOLD_HPP

class Gold : public Event{
    protected:
        bool is_found;
    public:
        Gold();
        char print_char();
        void encounter();
        void percept();
};

#endif