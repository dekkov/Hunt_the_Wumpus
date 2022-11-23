#include "room.h"

/******************************************************************
 * Function: Room()
 * Description: Default constructor for Room class
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: initialize value for class member
******************************************************************/
Room::Room(){
    row = 0;
    col = 0;
    has_event = false;
    event = NULL;
}

/******************************************************************
 * Function: Room(int, int)
 * Description: Non-Default constructor for Room class 
 * Parameters: int r, int c
 * Pre-Conditions: None
 * Post-Conditions: initialize value for class member
******************************************************************/
Room::Room(int r, int c){
    row = r;
    col = c;
    has_event = false;
    event = NULL;
}

/******************************************************************
 * Function: get_row()
 * Description: return row
 * Parameters: None
 * Pre-Conditions: row has a value
 * Post-Conditions: None
******************************************************************/
int Room::get_row(){
    return row;
}

/******************************************************************
 * Function: get_col()
 * Description: return col
 * Parameters: None
 * Pre-Conditions: col has a value
 * Post-Conditions: None
******************************************************************/
int Room::get_col(){
    return col;
}

/******************************************************************
 * Function: is_has_event()
 * Description: return has_event
 * Parameters: None
 * Pre-Conditions: has_event has value
 * Post-Conditions: None
******************************************************************/
bool Room::is_has_event(){
    return has_event;
}

/******************************************************************
 * Function: set_has_event(bool b)
 * Description: set has_event to b
 * Parameters: bool b
 * Pre-Conditions: None
 * Post-Conditions: has_event = b
******************************************************************/
void Room::set_has_event(bool b){
    this->has_event = b;
}


/******************************************************************
 * Function: get_event()
 * Description: return event
 * Parameters: None
 * Pre-Conditions: Event has a value
 * Post-Conditions: None
******************************************************************/
Event* Room::get_event(){
    return this->event;
}

/******************************************************************
 * Function: set_event(Event* arr)
 * Description: set event to envt
 * Parameters: Event* arr
 * Pre-Conditions: None
 * Post-Conditions: assign arr to event
******************************************************************/
void Room::set_event(Event* arr){
    this->event = arr;
    this->has_event = true;
}





