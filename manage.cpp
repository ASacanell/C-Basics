#include "manage.h"

void readFile(string filename){
	string text;
	ifstream file;

	cleanConsole();
	file.open(filename);
	if (file.is_open()) {
		while (getline(file, text)) {
			cout << text << endl;
		}
	file.close();
	} else {
		cout << "Unable to open file" << endl;
	}
	pauseConsole();
}

void cleanConsole(){
	system("cls");
}

void pauseConsole() {
	system("pause");
}

void welcomeCPPBasics() {
	cleanConsole();
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "**                                   **" << endl;
	cout << "**            C++ Basics             **" << endl;
	cout << "**                                   **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	pauseConsole();
}

void seeYouCPPBasics() {
	cleanConsole();
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	cout << "**                                   **" << endl;
	cout << "**             GoodBye               **" << endl;
	cout << "**            C++ Basics             **" << endl;
	cout << "**                                   **" << endl;
	cout << "***************************************" << endl;
	cout << "***************************************" << endl;
	pauseConsole();
}