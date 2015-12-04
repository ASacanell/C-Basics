#include <menus.h>


void showMainMenu(){
	cout << "" << endl;
	cout << "MainMenu" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;	
}

void showControlFlowMenu(){
	cout << "" << endl;
	cout << "ControlFlow" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;	
}

void showHelloWorldMenu(){
	cout << "" << endl;
	cout << "HelloWorld" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;	
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
	
	option = getOption(0,2);
	
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
			manageControlFlow_IF();
			break;}
		
		case 2:{
			manageControlFlow_WHILE();
			break;}
	}
	
	return back;
}