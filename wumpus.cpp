#include "wumpus.h"

/******************************************************************
 * Function: Wumpus()
 * Description: Default constructor for Wumpus class
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Wumpus::Wumpus(){
    is_dead = false;
}


/******************************************************************
 * Function: killed(bool c)
 * Description: set state of wumpus to c
 * Parameters: bool c
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Wumpus::killed(bool c){
    is_dead = c;
}



/******************************************************************
 * Function: encounter()
 * Description: print the message that player enter the boss room.
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Wumpus::encounter(){
  if(!is_dead){
    cout << "You've entered the Wumpus room" << endl;
    cout << "You've died!" << endl;
  }
}

/******************************************************************
 * Function: percept()
 * Description: print the message if player is adjacent
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: 
******************************************************************/
void Wumpus::percept(){
    if(!is_dead){
        cout << "You smell a terrible stench!" << endl;
    }
}


/******************************************************************
 * Function: print_char()
 * Description: return Wumpus's character.
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: 
******************************************************************/
char Wumpus::print_char(){
  return 'W';
}



