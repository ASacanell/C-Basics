#include "manage.h"

void readFile(string filename){
	string text;
	ifstream file;

	file.open(filename);
	if (file.is_open()) {
		while (getline(file, text)) {
			cout << text << endl;
		}
	file.close();
	} else {
		cout << "Unable to open file" << endl;
	}
}

void cleanConsole(){
	system("cls");
}