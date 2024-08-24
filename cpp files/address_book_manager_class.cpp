#include "address_book_manager_class.h"
void Manager::Add_contact(int id) {
	auto it=Manager::mp.find(id);
	if (it!=Manager::mp.end())
        cout << "this id is already exists,try another one" << endl;
    else{
		Manager::current_contact.Read(id);
		 Manager::mp[id]= Manager::current_contact;
		 cout << endl << "Do you want to add addresses for this user? (y/n): ";
	char ch;
	cin >> ch;
	if (ch == 'y') {
            Address address;
		cout << "How many addresses do you want to add? ";
		int n;
		cin >> n;
		cin.ignore();
		for (int i = 0;i < n;i++) {
			address.read_address();
			Manager::mp[id].get_addresses()[address.get_type()]=address;
		}
	}
	cout << endl << "Do you want to add emails for this user? (y/n): ";
	char ch2;
	cin >> ch2;
	if (ch2 == 'y') {
	    Email email;
		cout << "How many emails do you want to add? ";
		int n;
		cin >> n;
		cin.ignore();
		for (int i = 0;i < n;i++) {
			email.read_email();
			Manager::mp[id].get_emails()[email.get_type()]=email;
		}
	}
	cout << endl << "Do you want to add phone numbers for this user? (y/n): ";
	char ch3;
	cin >> ch3;
	if (ch3 == 'y') {
	    Phone_Number phone;
		cout << "How many phone numbers do you want to add? ";
		int n;
		cin >> n;
		cin.ignore();
		for (int i = 0;i < n;i++) {
			phone.read_phone();
			Manager::mp[id].get_phones()[phone.get_type()]=phone;
		}

		 cout<<"user added successfully"<<endl;
	}
    }


}
void Manager::Display_contacts() {
    for(auto&it:Manager::mp){
        auto&contact=it.second;
	    contact.display();
	    cout<<endl;
	}
	}

void Manager::Delete_contact(int id){
    auto it=Manager::mp.find(id);
    if (it!=Manager::mp.end()){
        cout<<"Are you sure you want to delete "<<Manager::mp[id].get_personal_details().get_first_name()<<" "<<Manager::mp[id].get_personal_details().get_last_name()<<"? (y/n) :";
        char ch;
        cin>>ch;
        if(ch=='y'){
            Manager::mp.erase(it);
            cout<<"User deleted successfully"<<endl;
        }
    }
    else
        cout<<"this ID is not found"<<endl;
}

void Manager::Edit_contact(int id){
    string str;
    auto it=Manager::mp.find(id);
    if(it!=Manager::mp.end()){
            int option=Manager::mn.edit_menue();
    if(option==1){
       std:: cout<<"Editing personal details for "<<Manager::mp[id].get_personal_details().get_first_name()<<" "<<Manager::mp[id].get_personal_details().get_last_name()<<":"<<endl;
       std:: cout<<"Current First name: "<<Manager::mp[id].get_personal_details().get_first_name()<<endl;
       std:: cout<<"Enter new First name ,or press Enter to keep current: ";
       cin.ignore();
       std:: getline(cin,str);
       if(str.empty())
        cout<<"we will keep you the current"<<endl;
       else
        Manager::mp[id].get_personal_details().set_frst_name(str);
       std:: cout<<"\nCurrent Last name: "<<Manager::mp[id].get_personal_details().get_last_name()<<endl;
       std:: cout<<"Enter new Last name ,or press Enter to keep current: ";
       std:: getline(cin,str);
       if(str.empty())
        cout<<"we will keep you the current"<<endl;
       else
        Manager::mp[id].get_personal_details().set_last_name(str);
       std:: cout<<"\nCurrent Gender: "<<Manager::mp[id].get_personal_details().get_gender()<<endl;
       std:: cout<<"Enter new Gender ,or press Enter to keep current: ";
      std:: getline(cin,str);
      if(str.empty())
        cout<<"we will keep you the current"<<endl;
       else
        Manager::mp[id].get_personal_details().set_gender(str);
       std:: cout<<"\nCurrent City: "<<Manager::mp[id].get_personal_details().get_city()<<endl;
        std::cout<<"Enter new City ,or press Enter to keep current: ";
        std::getline(cin,str);
        if(str.empty())
        cout<<"we will keep you the current"<<endl;
       else
        Manager::mp[id].get_personal_details().set_city(str);
       std:: cout<<"Personal details updated successfully!"<<endl;

    }
    else if(option==2){
            Address add;
    int op=Manager::mn.Edit_address_menu();
        if(op==1){
                cin.ignore();
                    add.read_address();
                    Manager::mp[id].get_addresses()[add.get_place()]=add;
        }
         else{
            if(Manager::mp[id].get_addresses().size()!=0){
   std:: cout<<"Editing addresses for "<<Manager::mp[id].get_personal_details().get_first_name()<<" "<<Manager::mp[id].get_personal_details().get_last_name()<<":\n";

            std:: cout<<"Enter the key of address you want to edit: ";
        string key;
        cin.ignore();
       getline(cin,key);
        auto it=Manager::mp[id].get_addresses().find(key);
    if (it!=Manager::mp[id].get_addresses().end()){
            std:: cout<<"Editing "<<key<<"  address"<<endl;
                  if(op==2){

                            string s;
                       std:: cout<<"current place: "<<Manager::mp[id].get_addresses()[key].get_place()<<endl;
                       std:: cout<<"Enter new place ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_addresses()[key].set_place(s);
                       std:: cout<<"current Type: "<<Manager::mp[id].get_addresses()[key].get_type()<<endl;
                       std:: cout<<"Enter new Type ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_addresses()[key].set_type(s);
                       std:: cout<<"current Description: "<<Manager::mp[id].get_addresses()[key].get_description()<<endl;
                       std:: cout<<"Enter new Description ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_addresses()[key].set_description(s);

                    }
                    else{

                    Manager::mp[id].get_addresses().erase(it);
                    cout<<"address deleted successfully"<<endl;
                    }

        }
        }
        else
            cout<<"there is not any address to Edit/Delete"<<endl;
        }

    }

        else if(option==3){
                Email eml;
         int op=Manager::mn.Edit_email_menu();
             if(op==1){
                    cin.ignore();
                   eml.read_email();
                    Manager::mp[id].get_emails()[eml.get_email()]=eml;
             }
             else{
                if(Manager::mp[id].get_emails().size()!=0){
             std::cout<<"Editing emails for "<<Manager::mp[id].get_personal_details().get_first_name()<<" "<<Manager::mp[id].get_personal_details().get_last_name()<<":\n";

          std:: cout<<"Enter key of email you want to edit: ";
        string key;
        cin.ignore();
        getline(cin,key);
       auto it=Manager::mp[id].get_emails().find(key);
      if(it!=Manager::mp[id].get_emails().end()) {
       std:: cout<<"Editing "<<key<< "  email"<<endl;
            if(op==2){
                            string s;
                       std:: cout<<"current Email: "<<Manager::mp[id].get_emails()[key].get_email()<<endl;
                       std:: cout<<"Enter new Email ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                       if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_emails()[key].set_email(s);
                       std:: cout<<"current Type: "<<Manager::mp[id].get_emails()[key].get_type()<<endl;
                       std:: cout<<"Enter new Type ,or press Enter to keep current: ";
                      std::  getline(cin,s);
                       if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_emails()[key].set_type(s);
                       std:: cout<<"current Description: "<<Manager::mp[id].get_emails()[key].get_description()<<endl;
                       std:: cout<<"Enter new Description ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_emails()[key].set_description(s);

                    }
                    else{
                        Manager::mp[id].get_emails().erase(it);
                        cout<<"email deleted successfully"<<endl;
                    }
           }

        }
        else
            cout<<"there is not any email to Edit/Delete"<<endl;
        }

        }

        else {
             Phone_Number phn;
                int op=Manager::mn.Edit_phone_menu();
                  if(op==1){
                        cin.ignore();
                    phn.read_phone();
                    Manager::mp[id].get_phones()[phn.get_phone()]=phn;
                  }
                   else{
                if( Manager::mp[id].get_phones().size()!=0){
            std::cout<<"Editing phone numbers  for "<<Manager::mp[id].get_personal_details().get_first_name()<<" "<<Manager::mp[id].get_personal_details().get_last_name()<<":\n";

                     std:: cout<<"Enter key of phone number you want to edit: ";
                     string key;
                     cin.ignore();
                    getline(cin,key);
                   std:: cout<<"Editing "<< key<<"  phone"<<endl;
        auto it=Manager::mp[id].get_phones().find(key);
                     if(it!=Manager::mp[id].get_phones().end()){
                     if(op==2){
                            string s;
                       std:: cout<<"current phone number: "<<Manager::mp[id].get_phones()[key].get_phone()<<endl;
                        std::cout<<"Enter new phone ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_phones()[key].set_phone(s);
                        std::cout<<"current Type: "<<Manager::mp[id].get_phones()[key].get_type()<<endl;
                       std:: cout<<"Enter new Type ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_phones()[key].set_type(s);
                       std:: cout<<"current Description: "<<Manager::mp[id].get_phones()[key].get_description()<<endl;
                       std:: cout<<"Enter new Description ,or press Enter to keep current: ";
                       std:: getline(cin,s);
                        if(s.empty())
                        cout<<"we will keep you current"<<endl;
                       else
                        Manager::mp[id].get_phones()[key].set_description(s);

                    }
                    else{
                        Manager::mp[id].get_phones().erase(it);
                        cout<<"phone deleted successfully"<<endl;
                    }
            }

           }
           else
            cout<<"there is not any phone to Edit/Delete"<<endl;
        }

    }
    }
    else
        cout<<"the contact with this ID is not found ,try another one"<<endl;
}


void Manager::Search_contact(){
    std::cout<<"Enter search term \ ( name,place,phone,email,etc.)\: ";
    string str;
    cin.ignore();
   std:: getline(cin,str);
       bool found=false;
       for(auto&it :Manager::mp){
            auto&inner=it.second;
    if(str==inner.get_personal_details().get_first_name()||str==inner.get_personal_details().get_last_name()||str==inner.get_personal_details().get_city()||str==inner.get_personal_details().get_gender()){
            found=true;
       inner.display();
    }
       auto adrs=inner.get_addresses().find(str);
       if(adrs!=inner.get_addresses().end()){
            found=true;
            inner.display();
       }
       auto eml=inner.get_emails().find(str);
       if(eml!=inner.get_emails().end()){
           found=true;
            inner.display();
       }
       auto phne=inner.get_phones().find(str);
       if(phne!=inner.get_phones().end()){
           found=true;
       inner.display();
       }
    }

  if(found){
    cout<<"Enter contact id you want to display: ";
    int id;
    cin>>id;
    Manager::mp[id].print();
  }
  else{
        cout<<"contact with this term is not found"<<endl;
       }


}
