#include <iostream>

using namespace std;



/*VIEW*/
/*
Shows in the console the main menu.
*/
void showMainMenu();

/*
Shows in the console the control flow submenu.
*/
void menuControlFlow();

/*
Shows in the console the hello world submenu.
*/
void menuHelloWorld();



/*CONTROLLER*/

/*
Gets the option for main menu which the user selects and goes into it.
return true if the program should end
*/
bool chooseMainOption();

/*
Gets the option for hello world which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseHelloWorldOption();

/*
Gets the option for control flow submenu which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseControlFlowOption();

/*
Gets the integer with the option which the user selects and checks if it's right.
return the integer when its into the correct range.
*/
int getOption(int min, int max);
