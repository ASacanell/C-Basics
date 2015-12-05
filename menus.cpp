#include "menus.h"
#include "manage.h"
#include <iostream>


/*SHOW MENU*/

void showMainMenu(){
	cout << "***************************************" << endl;
	cout << "**             MainMenu              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1  . Hello World                  **" << endl;
	cout << "** 2  . Control Flow                 **" << endl;
	cout << "** 3  . Enumerated                   **" << endl;
	cout << "** 4  . Structs                      **" << endl;
	cout << "** 5  . Pointers                     **" << endl;
	cout << "** 6  . Functions                    **" << endl;
	cout << "** 7  . Recursion                    **" << endl;
	cout << "** 8  . Sort                         **" << endl;
	cout << "** 9  . Files                        **" << endl;
	cout << "** 10 . Modules                      **" << endl;
	cout << "** 0  . Back                         **" << endl;
	cout << "***************************************" << endl;
}

void showHelloWorldMenu(){
	cout << "***************************************" << endl;
	cout << "**           HelloWorld              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Libraries                      **" << endl;
	cout << "** 2. Standard IO                    **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showControlFlowMenu(){
	cout << "***************************************" << endl;
	cout << "**           ControlFLow             **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. IF                             **" << endl;
	cout << "** 2. WHILE                          **" << endl;
	cout << "** 3. FOR                            **" << endl;
	cout << "** 4. SWITCH                         **" << endl;
	cout << "** 5. GOTO                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showEnumeratedMenu(){
	cout << "***************************************" << endl;
	cout << "**           Enumerated              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Creation                       **" << endl;
	cout << "** 2. Use                            **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showStructsMenu(){
	cout << "***************************************" << endl;
	cout << "**             Structs               **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Creation                       **" << endl;
	cout << "** 2. Use                            **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showPointersMenu(){
	cout << "***************************************" << endl;
	cout << "**             Pointers              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Creation                       **" << endl;
	cout << "** 2. Use                            **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showFunctionsMenu(){
	cout << "***************************************" << endl;
	cout << "**            Functions              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Arguments                      **" << endl;
	cout << "** 2. Return                         **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showRecursionMenu(){
	cout << "***************************************" << endl;
	cout << "**            Recursion              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Binary Search                  **" << endl;
	cout << "** 2. Factorial                      **" << endl;
	cout << "** 3. Pair Odd                       **" << endl;
	cout << "** 4. Fibonacci                      **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showSortMenu(){
	cout << "***************************************" << endl;
	cout << "**               Sort                **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Iterative                      **" << endl;
	cout << "** 2. Recursive                      **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showFilesMenu(){
	cout << "***************************************" << endl;
	cout << "**              Files                **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Libraries                      **" << endl;
	cout << "** 2. Use                            **" << endl;
	cout << "** 3. Code                           **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showModulesMenu(){
	cout << "***************************************" << endl;
	cout << "**             Modules               **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Implementation files           **" << endl;
	cout << "** 2. Header files                   **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

/*CHOOSE OPTION*/

bool chooseMainOption(){
	int option;
	bool end = false;
	
	option = getOption(0,10);

	switch(option){
		case 0:{
			end = true;
			break;}
		
		case 1:{
			menuHelloWorld();
			break;}
		
		case 2:{
			menuControlFlow();
			break;}
			
		case 3:{
			menuEnumerated();
			break;}
			
		case 4:{
			menuStructs();
			break;}
			
		case 5:{
			menuPointers();
			break;}
			
		case 6:{
			menuFuntions();
			break;}
			
		case 7:{
			menuRecursion();
			break;}
			
		case 8:{
			menuSort();
			break;}
			
		case 9:{
			menuFiles();
			break;}
			
		case 10:{
			menuModules();
			break;}			
	}
	
	return end;
}

bool chooseHelloWorldOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(helloWorldLIB);
			break;}
		
		case 2:{
			readFile(helloWorldIO);
			break;}
		
		case 3:{
			readFile(helloWorldCODE);
			break;}
	}
	
	return back;
}

bool chooseControlFlowOption(){
	int option;
	bool back = false;
	
	option = getOption(0,5);
	
	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(controlIF);
			break;}
		
		case 2:{
			readFile(controlWHILE);
			break;}
		
		case 3:{
			readFile(controlFOR);
			break;}
		
		case 4:{
			readFile(controlSWITCH);
			break;}
		
		case 5:{
			readFile(controlGOTO);
			break;}
	}
	
	return back;
}

bool chooseEnumeratedOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(enumeratedCR);
			break;}
		
		case 2:{
			readFile(enumeratedUSE);
			break;}
		
		case 3:{
			readFile(enumeratedCODE);
			break;}
	}
	
	return back;
}

bool chooseStructsOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(structsCR);
			break;}
		
		case 2:{
			readFile(structsUSE);
			break;}
		
		case 3:{
			readFile(structsCODE);
			break;}
	}
	
	return back;
}

bool choosePointersOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(pointersCR);
			break;}
		
		case 2:{
			readFile(pointersUSE);
			break;}
		
		case 3:{
			readFile(pointersCODE);
			break;}
	}
	
	return back;
}

bool chooseFunctionsOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(functionsIOARG);
			break;}
		
		case 2:{
			readFile(functionsRETURN);
			break;}
		
		case 3:{
			readFile(functionsCODE);
			break;}
	}
	
	return back;
}

bool chooseRecursionOption(){
	int option;
	bool back = false;
	
	option = getOption(0,4);
	
	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(recursionBIN);
			break;}
		
		case 2:{
			readFile(recursionFACT);
			break;}
					
		case 2:{
			readFile(recursionPAIR);
			break;}
					
		case 2:{
			readFile(recursionFIB);
			break;}
	}
	
	return back;
}

bool chooseSortOption(){
	int option;
	bool back = false;
	
	option = getOption(0,2);
	
	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(sortIT);
			break;}
		
		case 2:{
			readFile(sortREC);
			break;}
	}
	
	return back;
}

bool chooseFilesOption(){
	int option;
	bool back = false;
	
	option = getOption(0,3);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(filesLIB);
			break;}
		
		case 2:{
			readFile(filesUSE);
			break;}
		
		case 3:{
			readFile(filesCODE);
			break;}
	}
	
	return back;
}

bool chooseModulesOption(){
	int option;
	bool back = false;
	
	option = getOption(0,5);
	
	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			readFile(modulesC);
			break;}
		
		case 2:{
			readFile(modulesH);
			break;}
	}
	
	return back;
}

/*MANAGE MAIN OPTION*/

void menuHelloWorld(){
	bool back = false;
	
	do{
		cleanConsole();
		showHelloWorldMenu();
		back = chooseHelloWorldOption();
	}while(!back);
}

void menuControlFlow(){
	bool back = false;
	
	do{
		cleanConsole();
		showControlFlowMenu();
		back = chooseControlFlowOption();
	}while(!back);
}

void menuEnumerated(){
	bool back = false;
	
	do{
		cleanConsole();
		showEnumeratedMenu();
		back = chooseEnumeratedOption();
	}while(!back);
}

void menuStructs(){
	bool back = false;
	
	do{
		cleanConsole();
		showStructsMenu();
		back = chooseStructsOption();
	}while(!back);
}

void menuPointers(){
	bool back = false;
	
	do{
		cleanConsole();
		showPointersMenu();
		back = choosePointersOption();
	}while(!back);
}

void menuFuntions(){
	bool back = false;
	
	do{
		cleanConsole();
		showFuntionsMenu();
		back = chooseFuntionsOption();
	}while(!back);
}

void menuRecursion(){
	bool back = false;
	
	do{
		cleanConsole();
		showRecursionMenu();
		back = chooseRecursionOption();
	}while(!back);
}

void menuSort(){
	bool back = false;
	
	do{
		cleanConsole();
		showSortMenu();
		back = chooseSortOption();
	}while(!back);
}

void menuFiles(){
	bool back = false;
	
	do{
		cleanConsole();
		showFilesMenu();
		back = chooseFilesOption();
	}while(!back);
}

void menuModules(){
	bool back = false;
	
	do{
		cleanConsole();
		showModulesMenu();
		back = chooseModulesOption();
	}while(!back);
}




int getOption(int min, int max) {
	int option;
	do {
		cin >> option;
	} while ((option < min) || (option>max));
	return option;
}