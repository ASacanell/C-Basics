#include <iostream>
#include <menus.h>
#include <manage.h>

using namespace std;

int main(){
	bool end = false;
	
	do{
		showMainMenu();
		end = chooseMainOption();
	}while(!end);
	
	return 0;
}