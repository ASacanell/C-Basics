#include "menus.h"
#include "manage.h"
#include <iostream>


void showMainMenu(){
	cout << "***************************************" << endl;
	cout << "**             MainMenu              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. Hello World                    **" << endl;
	cout << "** 2. Control Flow                   **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showControlFlowMenu(){
	cout << "***************************************" << endl;
	cout << "**           ControlFLow             **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1. IF                             **" << endl;
	cout << "** 2. WHILE                          **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

void showHelloWorldMenu(){
	cout << "***************************************" << endl;
	cout << "**           HelloWorld              **" << endl;
	cout << "***************************************" << endl;
	cout << "** 1.                                **" << endl;
	cout << "** 2.                                **" << endl;
	cout << "** 0. Back                           **" << endl;
	cout << "***************************************" << endl;
}

bool chooseMainOption(){
	int option;
	bool end = false;
	
	option = getOption(0,2);

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
	}
	
	return end;
}

void menuControlFlow(){
	bool back = false;
	
	do{
		showControlFlowMenu();
		back = chooseControlFlowOption();
	}while(!back);
}

void menuHelloWorld(){
	bool back = false;
	
	do{
		showHelloWorldMenu();
		back = chooseHelloWorldOption();
	}while(!back);
}

bool chooseHelloWorldOption(){
	int option;
	bool back = false;
	
	option = getOption(0,0);

	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			menuHelloWorld();
			break;}
		
		case 2:{
			menuControlFlow();
			break;}
	}
	
	return back;
}

bool chooseControlFlowOption(){
	int option;
	bool back = false;
	
	option = getOption(0,2);
	
	switch(option){
		case 0:{
			back = true;
			break;}
		
		case 1:{
			manage(controlIF);
			break;}
		
		case 2:{
			manage(controlWHILE);
			break;}
	}
	
	return back;
}

int getOption(int min, int max) {
	int option;
	do {
		cin >> option;
	} while ((option < min) || (option>max));
	return option;
}