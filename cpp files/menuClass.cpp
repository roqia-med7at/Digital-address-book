#include "menuClass.h"
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
    int Menues::Edit_address_menu(){
        cout<<"Do you want to : "<<endl;
    cout<<"1.Add new address\n";
    cout<<"2.Edit an existing address\n";
    cout<<"3.Delete an existing address\n";
    int op;
    cin>>op;
    return op;
    };
    int Menues::Edit_email_menu(){
        cout<<"Do you want to : "<<endl;
    cout<<"1.Add new email\n";
    cout<<"2.Edit an existing email\n";
    cout<<"3.Delete an existing email\n";
    int op;
    cin>>op;
    return op;
    };
    int Menues::Edit_phone_menu(){
        cout<<"Do you want to : "<<endl;
    cout<<"1.Add new phone\n";
    cout<<"2.Edit an existing phone\n";
    cout<<"3.Delete an existing phone\n";
    int op;
    cin>>op;
    return op;
    };
