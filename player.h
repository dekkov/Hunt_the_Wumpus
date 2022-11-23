#include <iostream>
#include <vector>
#include <string>

#include "room.h"
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
    protected:
        bool gold_status;
        bool kill_wump_status;
        int n_arrows;
        Room* current;
    public:
        Player();
        Player(Room*);
        ~Player();
        void set_n_arrow(int);
        int get_n_arrow();

        void set_gold_status(bool);
        bool get_gold_status();

        void set_kill_wump_status(bool);
        bool get_kill_wump_status();

        void set_room(Room*);
        Room* get_room();

        void fire_arrow();
        void move(char);

};

#endif