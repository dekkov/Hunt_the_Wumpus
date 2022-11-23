#include "player.h"
#include "event.h"
#include "gold.h"
#include "wumpus.h"
#include "pit.h"
#include "bat.h"
#include "room.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

#ifndef GAME_H
#define GAME_H

class Game{
    protected:
        int dimension;
        vector<vector<Room> > room;
        vector<Room*> room_ptr;
        vector<Event*> event_ptr;
        Room* rope;
        Player* p;
        bool is_over;
        bool is_debug;
        
    public:
        Game();
        Game(int,int);
        ~Game();
        int random(int);
        Room* get_room(int,int);
        char check_move(string s);
        void create_maze();
        void assign_room();
        vector<int> empty_room();
        void assign_wumpus(int,int);
        string take_input_move();
        void assign_gold(int,int);
        void assign_bats_1(int,int);
        void assign_bats_2(int,int);
        void assign_pit_1(int,int);
        void assign_pit_2(int,int);
        void assign_rope(int,int);
        void percept();
        void start();
        bool is_complete();
        void debug();
        string take_input();
        void move(string);
        void display();
        void fire_arrow(string);
        void awake();
        void entered();
        void restart();
        void clear();
        friend bool operator ==(Room const &r1, Room const &r2);
};

#endif
