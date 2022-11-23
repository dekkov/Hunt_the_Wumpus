/******************************************************
** Program: hunt
** Author: Hoang Tran
** Date: 11/20/2022
** Description: simulating the hunt the wumpus game
** Input: moves, direction to move and shot arrow, debug mode, play again
** Output: instruction, percepts, results
******************************************************/


#include "game.h"
#include  <iostream>



using namespace std;

/******************************************************************
 * Function: take_dim()
 * Description: take dim
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
int take_dim(){
    int n = 0;
    do{
        cout << "Enter a dimension (>=4) ";
        cin >> n;
        cout << endl;
    }while(n < 4);
    return n;

}

/******************************************************************
 * Function: take_mode()
 * Description: take mode
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
int take_mode(){
    int d = 0;
    
    
    cout << "Enter 1-normal 2-debug: ";
    cin >> d;
    cout << endl;

    return d;

}


/******************************************************************
 * Function: is_continue()
 * Description: is_continue()
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
int is_continue(){
    int is_again = 0;
    cout << "Do you want to play again? 1-yes 2-no: ";
    cin >> is_again;
    cout << endl;
    return is_again;
}

/******************************************************************
 * Function: is_keep()
 * Description: keep configuration 
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/
bool is_keep(){
    bool a = false;
    int n = 0;
    cout << "Do you want to play with the same configuration? 1-yes 2-no: ";
    cin >> n;

    if(n==1){
        a = true;
    }

    return a;
}


/******************************************************************
 * Function: operate()
 * Description: operate the game
 * Parameters: None
 * Pre-Conditions: None
 * Post-Conditions: None
******************************************************************/

void operate(){
    int n = take_dim();
    int d = take_mode();
    int is_cont;
    
    
    Game game(n, d);
    game.start();
    

    bool a = is_keep();
    while(a){
        game.restart();
        a = is_keep();
    }

    game.clear();


}


int main(){

    srand(time(NULL));
    int is_cont = 0;
    
    
    do{
        operate();
        is_cont = is_continue();
    }while(is_cont == 1);
        
    
    
    
}