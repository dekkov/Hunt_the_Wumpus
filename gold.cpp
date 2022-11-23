#include "gold.h"

/******************************************************************
 * Function: Gold()
 * Description: Default constructor for Gold class
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: set is_found variable to false
******************************************************************/
Gold::Gold(){
  this->is_found = false;
}

/******************************************************************
 * Function: encounter()
 * Description: Display message that player has found the treasure
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Gold::encounter(){
    if (!(this->is_found)){
        cout << "You found the Treasure!" << endl;
        this->is_found = true;      
    }
}

/******************************************************************
 * Function: percept()
 * Description: Display percept that player is adjacent
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
void Gold::percept(){
    if (!(this->is_found)){
        cout << "You see a glimmer nearby!" << endl;    
    }
}

/******************************************************************
 * Function: print()
 * Description: returns gold character
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
char Gold::print_char(){
  return 'G';
}

