#include "address_book_Class.h"
#include "menuClass.h"
void Address_book::Run() {

	while (true) {
    int option = Address_book::book_menues.welcome_menue();
		if (option == 1){
                int id;
                cout<<"Enter the id"<<endl;
        cin>>id;
        cin.ignore();
			book_manager.Add_contact(id);
		}
		else if (option == 2){
                  int id;
                  cout<<"Enter the id"<<endl;
        cin>>id;
        cin.ignore();
			Address_book::book_manager.Edit_contact(id);
		}
		else if (option == 3){
		      int id;
		      cout<<"Enter the id"<<endl;
        cin>>id;
        cin.ignore();
			Address_book::book_manager.Delete_contact(id);
		}
		else if (option == 4){
			Address_book::book_manager.Search_contact();}
		else if (option == 5){
            cout << "All users: " << endl;
			Address_book::book_manager.Display_contacts();
		}
		else
			break;
	}

}
