#include "player.h"


/******************************************************************
 * Function: ~Player()
 * Description: Destructor
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Player::~Player(){
    if (this->current == NULL){
        delete [] this->current;
        this->current = NULL;
    }
}

/******************************************************************
 * Function: Player()
 * Description: Default constructor for player
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Player::Player(){
  //empty
}

/******************************************************************
 * Function: Player(Room*)
 * Description: Non-Default constructor for player
 * Parameters: Room* r
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Player::Player(Room* r){
    this->n_arrows = 3;
    this->gold_status = false;
    this->kill_wump_status = false;
    this->current = r;
}

/******************************************************************
 * Function: set_n_arrow(int n)
 * Description: sets n_arrow to n
 * Parameters: int n
 * Pre-Conditions: None
 * Post-Conditions: n_arrow = n
******************************************************************/
void Player::set_n_arrow(int n){
    this->n_arrows = n;
}

/******************************************************************
 * Function: get_n_arrow()
 * Description: get number of arrows
 * Parameters: int n
 * Pre-Conditions: None
 * Post-Conditions: n_arrow = n
******************************************************************/
int Player::get_n_arrow(){
    return this->n_arrows;
}

/******************************************************************
 * Function: set_gold_status(bool b)
 * Description: set gold_status to b
 * Parameters: bool b
 * Pre-Conditions: None
 * Post-Conditions: gold_status = b
******************************************************************/
void Player::set_gold_status(bool b){
    this->gold_status = b;
}


/******************************************************************
 * Function: get_gold_status(bool)
 * Description: get gold_status 
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
bool Player::get_gold_status(){
    return this->gold_status;
}

/******************************************************************
 * Function: set_kill_wump_status(bool b)
 * Description: set kill_wump_status to b
 * Parameters: bool b
 * Pre-Conditions: None
 * Post-Conditions: kill_wump_status = b
******************************************************************/
void Player::set_kill_wump_status(bool b){
    this->kill_wump_status = b;
}

/******************************************************************
 * Function: get_kill_wump_status()
 * Description: get kill_wump_status 
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
bool Player::get_kill_wump_status(){
    return this->kill_wump_status;
}

/******************************************************************
 * Function: set_room(Room* r)
 * Description: set current room to r
 * Parameters: Room* r
 * Pre-Conditions: None
 * Post-Conditions: current = r
******************************************************************/
void Player::set_room(Room* r){
    this->current = r;
}

/******************************************************************
 * Function: get_room()
 * Description: get current 
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Room* Player::get_room(){
    return this->current;
}