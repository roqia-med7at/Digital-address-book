#include"Manager.h"
void Manager::Add_contact(int id){
    auto it=Manager::contacts.find(id);
    if(it!=Manager::contacts.end()){
cout<<"the contact with this id is already exists,try another one"<<endl;}
else{
    cout<<"Enter new contact information"<<endl;
    cout<<"------------------------------"<<endl;
    Manager::current_contact.get_personal_details().Read();
    Manager::contacts[id]=Manager::current_contact;
    cout<<"Do you want to add addresses for this contact?(y/n): ";
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        Manager::contacts[id].get_address().Add();
    }
    else
        cout<<endl;
    cout<<"Do you want to add emails for this contact?(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        Manager::contacts[id].get_email().Add();
    }
     else{
        cout<<endl;}
        cout<<"Do you want to add phone_numbers for this contact?(y/n): ";
        cin>>ch;
    if(ch=='y'||ch=='Y'){
        Manager::contacts[id].get_phones().Add();
    }
      else{
        cout<<endl;}
    }

}
void Manager::Display_contacts(){
     for(auto&it:Manager::contacts){
 cout<<it.first<<" - ";
    it.second.print_contact();
     }
}
void Manager::Delete_contact(int id){
    auto it=Manager::contacts.find(id);
    if(it!=Manager::contacts.end()){
cout<<"Are you sure you want to delete "<<it->second.get_personal_details().get()["first_name"]<<" "<<it->second.get_personal_details().get()["last_name"]<<"? (y/n) :";
        char ch;
        cin>>ch;
        if(ch=='y'){
            Manager::contacts.erase(it);
            cout<<"contact deleted successfully"<<endl;
        }
    }
    else
        cout<<"the contact with this id is not found,try another one"<<endl;
}

void Manager::print_all(int id){
   Manager::contacts[id].get_personal_details().Print_personal_details();
Manager::contacts[id].get_address().Print_addresses();
Manager::contacts[id].get_email().Print_emails();
Manager::contacts[id].get_phones().Print_phones();
}
void Manager::Search_contact(){
    cout<<"Enter the search term: ";
    cin.ignore();
    string str;
    getline(cin,str);
    for(auto&it:Manager::contacts){
   bool found= it.second.random_search(str);
   if(found){
    cout<<it.first<<" - ";
    it.second.print_contact();
   }

}
cout<<"Enter contact ID to display all details: ";
int id;
cin>>id;
Manager::print_all(id);

}

void Manager::Edit_contact(int id){
    auto it=Manager::contacts.find(id);
    if(it!=Manager::contacts.end()){
        int op=Manager::contact_menu.edit_menue();
    if(op==1)
        Manager::contacts[id].get_personal_details().Edit();
        else{
                if(op==2){
            int option1=Manager::contacts[id].get_address().Edit_address_menu();
            if(option1==1)
                Manager::contacts[id].get_address().Add();
            else if(option1==2){
                Manager::contacts[id].get_address().Edit();}
            else
                Manager::contacts[id].get_address().Delete();
                }
            else if(op==3){
                int option2=Manager::contacts[id].get_email().Edit_email_menu();
                if(option2==1)
                    Manager::contacts[id].get_email().Add();
                else if(option2==2)
                    Manager::contacts[id].get_email().Edit();
                else
                    Manager::contacts[id].get_email().Delete();
            }
            else{
                int opton3=Manager::contacts[id].get_phones().Edit_phone_menu();
                if(opton3==1)
                    Manager::contacts[id].get_phones().Add();
                else if(opton3==2)
                    Manager::contacts[id].get_phones().Edit();
                else
                    Manager::contacts[id].get_phones().Delete();
            }
        }
    }
}

