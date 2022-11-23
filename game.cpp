#include "game.h" 
/******************************************************************
 * Function: Game()
 * Description: Default constructor
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: values are initialized
******************************************************************/

Game::Game(){
    this->dimension =0;
    // this->room_ptr = NULL;
    // this->event_ptr = NULL;
    // this->rope = NULL;
    // this->p = NULL;
    this->is_over = false;
}


/******************************************************************
 * Function: ~Game()
 * Description: Destructor
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

Game::~Game(){
    // for (int i = 0; i < room_ptr.size(); i++){
    //     delete room_ptr[i];
    //     room_ptr[i] = NULL;
    // }
    // for (int i = 0; i < event_ptr.size(); i++){
    //     delete event_ptr[i];
    //     event_ptr[i] = NULL;
    // }

    // delete rope;
    // rope = NULL;

    delete p;
    p = NULL;
}

/******************************************************************
 * Function: Game(int n)
 * Description: Non-default constructor 
 * Parameters: int n
 * Pre-Conditions: None
 * Post-Conditions: values are initialized
******************************************************************/
Game::Game(int n, int d){
    this->dimension = n;
    this->create_maze();
    // int s_row = this->random(n);
    // int s_col = this->random(n);
    assign_room();
    // rope = get_room(s_row, s_col);
    // p = new Player(rope);
    this->is_over = false;
    this->is_debug = false;
    if (d == 2){
        this->is_debug = true;
    }
}


/******************************************************************
 * Function: create_maze()
 * Description: initialize 2d vector for the maze
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Game::create_maze(){
    for (int i = 0; i < this->dimension; i++){
        vector<Room> row_vec;
        for (int j = 0; j < this->dimension; j++){
            row_vec.push_back(Room(i, j));
        }
        this->room.push_back(row_vec);
    }
}

/******************************************************************
 * Function: random(int dimension)
 * Description: return a random number > 0 and < dimension
 * Parameters: int dimension
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
int Game::random(int d){
    srand(time(NULL));
    int num = rand() % d;
    return num; 
}


/******************************************************************
 * Function: get_room(int row, int col)
 * Description: return the room based on indexes
 * Parameters: int row, int col
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

Room* Game::get_room(int row, int col){
    Room* ptr;
    ptr = &(this->room.at(row).at(col));
    return ptr;
}


/******************************************************************
 * Function: is_has_event(int, int)
 * Description: Determine a room that has no event
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

vector<int> Game::empty_room(){
    vector<int> arr(2);
    srand(time(NULL));
    int r = this->random(this->dimension);
    int c = this->random(this->dimension);
    while(this->room.at(r).at(c).is_has_event()){
        r = this->random(this->dimension);
        c = this->random(this->dimension);
    }
    arr.at(0) = r;
    arr.at(1) = c;

    return arr;
}


/******************************************************************
 * Function: assign_wumpus(int i, int j)
 * Description: assign room for wumpus
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: wumpus has been assigned to a room
******************************************************************/
void Game::assign_wumpus(int i, int j){

    Wumpus* wump = new Wumpus(); 
    this->event_ptr.push_back(wump);
    this->room.at(i).at(j).set_event(wump);
    this->room_ptr.push_back(get_room(i,j));
    
}


/******************************************************************
 * Function: assign_gold(int i, int j)
 * Description: assign room for gold
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: gold has been assigned to a room
******************************************************************/
void Game::assign_gold(int i, int j){

    Gold* gold = new Gold(); 
    this->event_ptr.push_back(gold);
    this->room.at(i).at(j).set_event(gold);
    this->room_ptr.push_back(get_room(i,j));
    
}


/******************************************************************
 * Function: assign_bats_1(int i, int j)
 * Description: assign room for bats 1
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: bats has been assigned to a room
******************************************************************/
void Game::assign_bats_1(int i, int j){

    Bats* bats = new Bats(); 
    this->event_ptr.push_back(bats);
    this->room.at(i).at(j).set_event(bats);
    this->room_ptr.push_back(get_room(i,j));
    
}


/******************************************************************
 * Function: assign_bats_2(int i, int j)
 * Description: assign room for bats 2
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: bats has been assigned to a room
******************************************************************/
void Game::assign_bats_2(int i, int j){

    Bats* bats = new Bats(); 
    this->event_ptr.push_back(bats);
    this->room.at(i).at(j).set_event(bats);
    this->room_ptr.push_back(get_room(i,j));
    
}


/******************************************************************
 * Function: assign_pit_1(int i, int j)
 * Description: assign room for pit 1
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: pit 1 has been assigned to a room
******************************************************************/
void Game::assign_pit_1(int i, int j){

    Pit* pit = new Pit(); 
    this->event_ptr.push_back(pit);
    this->room.at(i).at(j).set_event(pit);
    this->room_ptr.push_back(get_room(i,j));
    
}


/******************************************************************
 * Function: assign_pit_2(int i, int j)
 * Description: assign room for pit 2
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: pit has been assigned to a room
******************************************************************/
void Game::assign_pit_2(int i, int j){

    Pit* pit = new Pit(); 
    this->event_ptr.push_back(pit);
    this->room.at(i).at(j).set_event(pit);
    this->room_ptr.push_back(get_room(i,j));
    
}

/******************************************************************
 * Function: assign_rope(int i, int j)
 * Description: assign room for rope
 * Parameters: int i, int j
 * Pre-Conditions: NONE
 * Post-Conditions: rope has been assigned to a room
******************************************************************/
void Game::assign_rope(int i, int j){

    this->rope = get_room(i,j);
    this->p = new Player(rope);
    
    
}




/******************************************************************
 * Function: assign_room()
 * Description: assign events to the maze
 * Parameters: None
 * Pre-Conditions: The maze has been initialized
 * Post-Conditions: events has been assigned
******************************************************************/

void Game::assign_room(){
    vector<int> arr;
    arr = empty_room();
    assign_wumpus(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_gold(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_bats_1(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_bats_2(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_pit_1(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_pit_2(arr.at(0),arr.at(1));

    arr = empty_room();
    assign_rope(arr.at(0),arr.at(1));

}


/******************************************************************
 * Function: operator== (Room const &r1, Room const &r2)
 * Description: compare 2 rooms
 * Parameters: Room const &r1, Room const &r2
 * Pre-Conditions: Rooms has been initialized
 * Post-Conditions: None
******************************************************************/

bool operator== (Room const &r1, Room const &r2){
    return (r1.row == r2.row) && (r1.col == r2.col);
}


/******************************************************************
 * Function: debug()
 * Description: go into debug mode
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/


void Game::debug(){
    cout << endl;
    for(int i = 0; i < this->dimension; i++){
        cout << "----";
    }


    cout << endl;
    for (int i = 0; i < this->dimension; i++){

        if (i > 0){
            for(int k = 0; k < this->dimension; k++){
                cout << "----";
            }
            cout << endl;
        }

        for (int j = 0; j < this->dimension; j++){
            
            if(this->room.at(i).at(j) == *(this->p->get_room())){
                // cout << "| ";
                cout << " * |";
            }
            else if(this->room.at(i).at(j).is_has_event()){
                cout << " ";
                cout << this->room.at(i).at(j).get_event()->print_char();
                cout << " |";
            }
            else{
                cout << "   |";
            }
        }

        cout << endl;
    }


    

    
    for(int i = 0; i < this->dimension; i++){
        cout << "----";
    }
    cout << endl << endl << "Arrows left: " << this->p->get_n_arrow() << endl << endl;
}
/******************************************************************
 * Function: display()
 * Description: display the maze
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void Game::display(){
    cout << endl;
    for(int i = 0; i < this->dimension; i++){
        cout << "----";
    }


    cout << endl;
    for (int i = 0; i < this->dimension; i++){
        
        if (i > 0){
            for(int k = 0; k < this->dimension; k++){
                cout << "----";
            }
            cout << endl;
        }
        for (int j = 0; j < this->dimension; j++){
            if(this->room.at(i).at(j) == *(this->p->get_room())){
                // cout << "| ";
                cout << " * |";
            }
            else{
                cout << "   |";
            }
        }

        cout << endl;
    }




    
    for(int i = 0; i < this->dimension; i++){
         cout << "----";
    }
    cout << endl << endl << "Arrows left: " << this->p->get_n_arrow() << endl << endl;
}

/******************************************************************
 * Function: check_move(string c)
 * Description: check the input of the player
 * Parameters: string c
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
char Game::check_move(string c){
    
    int a = c.compare("w");
    if (a == 0){
        return 'w';
    }

    a = c.compare("s");
    if (a == 0){
        return 's';
    }

    a = c.compare("d");
    if (a == 0){
        return 'd';
    }

    a = c.compare("a");
    if (a == 0){
        return 'a';
    }

    return ' ';
    
}

/******************************************************************
 * Function: move(char c)
 * Description: moves the player by 1 room
 * Parameters: char c
 * Pre-Conditions: None
 * Post-Conditions: Player position moved
******************************************************************/

void Game::move(string s){
    int row = this->p->get_room()->get_row();
    int col = this->p->get_room()->get_col();
    char a = check_move(s);
    switch(a){
        case 'a':
            if(col - 1 >= 0){
                this->p->set_room(this->get_room(row,col-1));
            }
            else{
                cout << "You hit the wall" << endl;
            }
            break;
        
        case 'd':
            if(col + 1 < this->dimension){
                this->p->set_room(this->get_room(row,col+1));
            }
            else{
                cout << "You hit the wall" << endl;
            }
            break;
        case 'w':
            if(row - 1 >= 0){
                this->p->set_room(this->get_room(row-1,col));
            }
            else{
                cout << "You hit the wall" << endl;
            }
            break;
        case 's':
            if(row + 1 < this->dimension){
                this->p->set_room(this->get_room(row+1,col));
            }
            else{
                cout << "You hit the wall" << endl;
            }
            break;
        default:
            cout << "You enter wrong format to move" << endl;
        

    }
}



/******************************************************************
 * Function: fire_arrow(string s)
 * Description: fire an arrow
 * Parameters: string s
 * Pre-Conditions: n_arrow > 0
 * Post-Conditions: n_arrow -= 1
******************************************************************/

void Game::fire_arrow(string str){


    if (this->p->get_n_arrow() < 1){
        if (!(this->p->get_kill_wump_status())){
            // cout << "WTF???" << endl;
            this->is_over = true;
        }
        cout << "You ran out of arrow! " << endl;
        return;
    }


    int row = this->p->get_room()->get_row();
    int col = this->p->get_room()->get_col();
    int a = -1;
    int w = -1;
    int d = -1;
    int s = -1;
    a = str.compare(" a");
    w = str.compare(" w");
    d = str.compare(" d");
    s = str.compare(" s");
    if (a == 0 || w == 0 || d == 0 || s == 0){
        if (a == 0){
            cout << "You shot an arrow to the West" << endl;
            for (int i = 1; i < 4; i++){
                if (col - i >= 0){
                    if(this->get_room(row, col - i)->is_has_event()){
                        if(this->get_room(row, col - i)->get_event()->print_char() == 'W'){
                            this->p->set_kill_wump_status(true);
                            
                        }
                    }
                }
            }
        }



        if(d == 0){
            cout << "You shot an arrow to the East" << endl;
            for (int i = 1; i < 4; i++){
                if (col + i < this->dimension){
                    if(this->get_room(row, col + i)->is_has_event()){
                        if(this->get_room(row, col + i)->get_event()->print_char() == 'W'){
                            this->p->set_kill_wump_status(true);
                            
                        }
                    }
                }
            }
        }
        

        if (w == 0){
            cout << "You shot an arrow to the North" << endl;
            for (int i = 1; i < 4; i++){
                if (row - i >= 0){
                    if(this->get_room(row - i, col)->is_has_event()){
                        if(this->get_room(row - i, col)->get_event()->print_char() == 'W'){
                            this->p->set_kill_wump_status(true);
                        
                        }
                    }
                }
            }
        }



        if (s == 0){
            cout << "You shot an arrow to the South" << endl;
            for (int i = 1; i < 4; i++){
                if (col + i <= this->dimension){
                    if(this->get_room(row + i, col)->is_has_event()){
                        if(this->get_room(row + i, col)->get_event()->print_char() == 'W'){
                            this->p->set_kill_wump_status(true);
                            
                        }
                    }
                }
            }
        }


        this->p->set_n_arrow(this->p->get_n_arrow()-1);
        if (this->p->get_kill_wump_status()){
            cout << "You killed the Wumpus!" << endl;
        }

        else{
            cout << "You missed!" << endl;
            awake();
        }

        if (this->p->get_n_arrow() < 1){
            if (!(this->p->get_kill_wump_status())){
                // cout << "WTFFFFFFF" << endl;
                this->is_over = true;
            }
            cout << "You ran out of arrow! " << endl;
        }
    }
}


/******************************************************************
 * Function: awake()
 * Description: The wumpus has 75% chance to teleport to a random room
 * Parameters: None
 * Pre-Conditions: arrow missed
 * Post-Conditions: None
******************************************************************/

void Game::awake(){
    srand(time(NULL));
    int n = rand() % 4;
    if (n >0){
        cout << "The Wumpus moved" << endl;
        Event* ptr;
        for (int i = 0; i < this->dimension; i++){
            for (int j = 0; j < this->dimension; j++){
                if(this->get_room(i,j)->is_has_event()){
                    if(this->get_room(i,j)->get_event()->print_char() == 'W'){
                        ptr = get_room(i,j)->get_event();
                        get_room(i,j)->set_event(NULL);
                        get_room(i,j)->set_has_event(false);
                    }
                }
            }
        }



        vector<int> arr;
        arr = empty_room();
        this->room.at(arr[0]).at(arr[1]).set_event(ptr);

    }


}


/******************************************************************
 * Function: percept()
 * Description: print instruction if player is adjacent to an event
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/


void Game::percept(){

    int r = this->p->get_room()->get_row();
    int c = this->p->get_room()->get_col();

    if (r - 1 >= 0){
        if (this->room.at(r-1).at(c).is_has_event()){
            this->room.at(r-1).at(c).get_event()->percept();
        }
    }


    if (r + 1 < this->dimension){
        if (this->room.at(r+1).at(c).is_has_event()){
            this->room.at(r+1).at(c).get_event()->percept();
        }
    }

    if (c - 1 >= 0){
        if (this->room.at(r).at(c-1).is_has_event()){
            this->room.at(r).at(c-1).get_event()->percept();
        }
    }

    if (c + 1 < this->dimension){
        if (this->room.at(r).at(c+1).is_has_event()){
            this->room.at(r).at(c+1).get_event()->percept();
        }
    }


    cout << endl << endl;

}


/******************************************************************
 * Function: entered()
 * Description: Player entered a room
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void Game::entered(){
    if (this->p->get_room()->is_has_event()){
        char event = this->p->get_room()->get_event()->print_char();
        if (event == 'W'){
            if(!this->p->get_kill_wump_status()){
                this->p->get_room()->get_event()->encounter();
            }
        }
        else{
            this->p->get_room()->get_event()->encounter();
        }



        switch(event){
            case 'W': {
                if(!this->p->get_kill_wump_status()){
                    // cout << "WTFFFFFF" << endl;
                    this->is_over = true;
                }
                break;
            }

            case 'G': {
                this->p->set_gold_status(true);
                break;
            }

            case 'B': {
                Room* r = get_room(random(this->dimension),random(this->dimension));
                this->p->set_room(r);
                entered();
                break;
            }

            case 'P': {
                // cout << "WTFFFFFF2" << endl;
                this->is_over = true;
                break;
            }

            default:{
                cout << "You entered the room safely: " << endl;
            }

            
        }
    }

}


/******************************************************************
 * Function: clear()
 * Description: clear all events
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void Game::clear(){
    for(int i = 0; i < this->event_ptr.size(); i++){
        delete event_ptr[i];
    }

    event_ptr.clear();
}


/******************************************************************
 * Function: restart()
 * Description: restart the game
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void Game::restart(){
    this->clear();
    delete this->p;
    is_over = false;
    this->p = new Player(rope);

    Wumpus* w = new Wumpus();
    event_ptr.push_back(w);
    room_ptr.at(0)->set_event(w);

    Gold* g = new Gold();
    event_ptr.push_back(g);
    room_ptr.at(1)->set_event(g);

    Bats* bat_1 = new Bats();
    event_ptr.push_back(bat_1);
    room_ptr.at(2)->set_event(bat_1);

    Bats* bat_2 = new Bats();
    event_ptr.push_back(bat_2);
    room_ptr.at(3)->set_event(bat_2);

    Pit* pit_1 = new Pit();
    event_ptr.push_back(pit_1);
    room_ptr.at(4)->set_event(pit_1);

    Pit* pit_2 = new Pit();
    event_ptr.push_back(pit_2);
    room_ptr.at(5)->set_event(pit_2);

    start();

}

/******************************************************************
 * Function: take_input()
 * Description: take user input
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
string Game::take_input(){
    // initscr();
    string s;
    cout << "Enter your action: ";
    getline(cin,s);
    return s;
}



/******************************************************************
 * Function: is_complete()
 * Description: check if the player win the game
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: is_complete is true
******************************************************************/
bool Game::is_complete(){
    if(this->p->get_kill_wump_status() && this->p->get_gold_status() && *(this->p->get_room()) == *rope){
        cout << "You have killed the wumpus, collected the gold and found the escape rope" << endl;
        this->is_over = true;
        return true;
    }
    return false;
}


/******************************************************************
 * Function: start()
 * Description: start the game
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void Game::start(){
    while(!this->is_over){
        if (this->is_debug){
            this->debug();
        }
        else{
            this->display();
        }
        this->percept();
        string s = " ";
        s = this->take_input();
        this->fire_arrow(s);
        this->move(s);
        this->entered();
        
        if(this->is_complete()){
            cout << "You Win!" << endl;
        }

        

    }

    if (this->is_debug){
        this->debug();
    }
    else{
        this->display();
    }
    cout << "Game Over!" << endl;
}