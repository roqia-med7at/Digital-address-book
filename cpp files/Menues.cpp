#include<iostream>
#include<string>
#include"Menues.h"
using namespace std;
 int  Menues::welcome_menue() {
	cout << "Welcome to the Digital Address Book!" << endl << "----------------" << endl;
	cout << "1. Add a new user" << endl;
	cout << "2. Edit an existing user" << endl;
	cout << "3. Delete a user" << endl;
	cout << "4. search for a user" << endl;
	cout << "5. Display all users" << endl;
	cout << "6. Exit" << endl;
	cout << "Please choose an option (1-6) :";
	int n;
	cin >> n;
	return n;


}
 int  Menues::edit_menue() {

	cout << "What do you want to edit? " << endl;
	cout << "1. Personal details" << endl;
	cout << "2. Addresses" << endl;
	cout << "3. Email addresses" << endl;
	cout << "4. Phone numbers" << endl;
	cout << "Please choose an option (1-4) :";
	int n;
	cin >> n;
	return n;
}
