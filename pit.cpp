#include "pit.h"

/******************************************************************
 * Function: Pit()
 * Description: Default constructor for Pit class
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Pit::Pit(){
  //empty
}

/******************************************************************
 * Function: encounter()
 * Description: print a message that player have entered the room
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Pit::encounter(){
  cout << "You fall into an endless pit and die!" << endl;
}


/******************************************************************
 * Function: percept()
 * Description: print message if player is adjacent
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Pit::percept(){
  cout << "You feel a cool breeze." << endl;
}


/******************************************************************
 * Function: print_char()
 * Description: return pit's character
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
char Pit::print_char(){
  return 'P';
}

