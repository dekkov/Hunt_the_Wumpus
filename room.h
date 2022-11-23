#include <iostream>
#include <string>
#include <vector>
#include "event.h"

using namespace std;

#ifndef ROOM_H
#define ROOM_H

class Room {
    protected:
        
        int row;
        int col;
        bool has_event;
        Event* event;

    public:
        Room();
        Room(int, int); 
        void set_has_event(bool);
        void set_event(Event* event);

        bool is_has_event();
        int get_row();
        int get_col();
        Event* get_event();

        void display();

        friend bool operator== (Room const &r1, Room const &r2);
        
    
};

#endif