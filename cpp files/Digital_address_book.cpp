#include"Digital_address_book.h"
void Digital_address_book::Run() {

	while (true) {
             int option = book_menues.welcome_menue();
		if (option == 1){
                int id;
                cout<<"Enter ID "<<endl;
        cin>>id;
        cin.ignore();
			book_manager.Add_contact(id);
		}
		else if (option == 2){
                  int id;
                  cout<<"Enter ID "<<endl;
        cin>>id;
        cin.ignore();
			Digital_address_book::book_manager.Edit_contact(id);
		}
		else if (option == 3){
		      int id;
		      cout<<"Enter ID "<<endl;
        cin>>id;
        cin.ignore();
			Digital_address_book::book_manager.Delete_contact(id);
		}
		else if (option == 4){
			Digital_address_book::book_manager.Search_contact();}
		else if (option == 5){
            cout << "All users: " << endl;
			Digital_address_book::book_manager.Display_contacts();
		}
		else
			break;
	}

}
