#include "contactClass.h"
#include<stdexcept>
 map<string,Address>&Contact::get_addresses(){
    return Contact::addresses;
};
    map<string,Email>& Contact::get_emails(){
        return Contact::emails;
    };
    map<string,Phone_Number>& Contact:: get_phones(){
        return Contact::phone_numbers;
    };
    Personal_details& Contact::get_personal_details(){
        return Contact::personal_details;
    };
const int Contact::get_id()const{
    return Contact::ID;
};
    void Contact:: set_id(int id){
        if(id<0)
            throw invalid_argument("id should not be negative");
            else
        Contact::ID=id;
    };
void Contact::Read(int id) {
	Contact::set_id(id);
	Contact::personal_details.read();

}
void Contact::display(){
    cout<<Contact::personal_details.print()<<endl;
}

void Contact::print() {

	cout << "User details: " << endl;
	cout << "ID: " << Contact::ID << endl;
	cout << "Name: " << Contact::get_personal_details().get_first_name() << " " << Contact::get_personal_details().get_last_name() << endl;
	cout << "Gender: " << Contact::get_personal_details().get_gender() << endl;
	cout << "City: " << Contact::get_personal_details().get_city() << endl;
	cout << "Date Added: " << Contact::get_personal_details().get_added_date() << endl;
	cout << "Addresses: " << endl;
	for (auto& it:Contact::addresses) {
	       cout<<it.first<<": "<<endl;
          auto&add=it.second;
           cout<< add.print_address();
		cout << endl;
	}
	cout << "Emails: " << endl;
	for (auto& it:Contact::emails) {
            cout<<it.first<<": ";
          auto&em=it.second;
		 cout<< em.print_email();
		cout << endl;
	}
	cout << "Phone numbers: " << endl;
	for (auto&it: Contact::phone_numbers) {
	    cout<<it.first<<": ";
          auto&ph=it.second;
		cout<<ph.print_phone();
		cout << endl;
	}

};

