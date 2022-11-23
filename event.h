#include <iostream>
#include <vector>
#include <string>



#ifndef EVENT_H
#define EVENT_H

using namespace std;

class Event{
    protected:
    public:
        Event();
        virtual char print_char() = 0;
        virtual void encounter() = 0;
        virtual void percept() = 0;
        
};

#endif