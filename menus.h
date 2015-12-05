#include <iostream>

using namespace std;



/*VIEW*/
/*
Shows in the console the main menu.
*/
void showMainMenu();

/*
Shows in the console the hello world submenu.
*/
void menuHelloWorld();

/*
Shows in the console the control flow submenu.
*/
void menuControlFlow();

/*
Shows in the console the enumerated submenu.
*/
void menuEnumerated();

/*
Shows in the console the structs submenu.
*/
void menuStructs();

/*
Shows in the console the pointers submenu.
*/
void menuPointers();

/*
Shows in the console the functions submenu.
*/
void menuFunctions();

/*
Shows in the console the recursion submenu.
*/
void menuRecursion();

/*
Shows in the console the sort submenu.
*/
void menuSort();

/*
Shows in the console the files submenu.
*/
void menuFiles();

/*
Shows in the console the modules submenu.
*/
void menuModules();





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
Gets the option for enumerated which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseEnumeratedOption();

/*
Gets the option for structs which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseStructsOption();

/*
Gets the option for pointers which the user selects and goes into it.
return true if the program should back to main menu
*/
bool choosePointersOption();

/*
Gets the option for functions which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseFunctionsOption();

/*
Gets the option for recursion which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseRecursionOption();

/*
Gets the option for sort which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseSortOption();

/*
Gets the option for files which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseFilesOption();

/*
Gets the option for modules which the user selects and goes into it.
return true if the program should back to main menu
*/
bool chooseModulesOption();




/*
Gets the integer with the option which the user selects and checks if it's right.
return the integer when its into the correct range.
*/
int getOption(int min, int max);
