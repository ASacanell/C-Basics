#include <iostream>
#include "menus.h"
#include "manage.h"

using namespace std;

int main(){
	bool end = false;
	
	welcomeCPPBasics();
	do{
		cleanConsole();
		showMainMenu();
		end = chooseMainOption();
	}while(!end);
	
	seeYouCPPBasics();

	return 0;
}