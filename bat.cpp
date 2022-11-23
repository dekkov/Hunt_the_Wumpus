#include "bat.h"

/******************************************************************
 * Function: Bats()
 * Description: Default constructor for Bats class
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
Bats::Bats(){
    //empty
}

/******************************************************************
 * Function: encounter()
 * Description: display game instruction when player enter the room.
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Bats::encounter(){
  cout << "You encounter a room of Bats!" << endl;
  cout << "You have been teleported to a random room!" << endl;
}

/******************************************************************
 * Function: print_char()
 * Description: print Bat character
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
char Bats::print_char(){
  return 'B';
}

/******************************************************************
 * Function: percept()
 * Description: display a message when player is adjacent
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Bats::percept(){
  cout << "You hear wings flapping!" << endl;
 
}




