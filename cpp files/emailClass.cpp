#include "emailClass.h"
void Email::set_email(string em) {
    if(em!=" ")
	Email::Email = em;
	else
        throw invalid_argument("enter a valid email");
}
const string Email::get_email() const {
	return Email::Email;
}
void Email::set_type(string type) {
    if(type!=" ")
	Email::Type=type;
	else
        throw invalid_argument("enter a valid type");
}
const string Email::get_type()const {
	return Email::Type;
}
void Email::set_description(string description) {
    if(description!=" ")
	Email::Description = description;
	else
        throw invalid_argument("enter a valid description");
}
const string Email::get_description()const {
	return Email::Description;
}
void Email::read_email() {
        string str;
		cout << endl << "Enter email details:" << endl;
		cout << "Email: ";
		//cin.ignore();
		getline(cin,str);
		Email::set_email(str);
		cout << endl << "Type \"(Personal,Work,Other)\": ";

		getline(cin,str);
		Email::set_type(str);
		cout << endl << "Description: ";

		getline(cin,str);
	    Email::set_description(str);
		cout << endl;
}
string Email::print_email() {
	string s= " - "+Email::get_type() + " : " + Email::get_email()+" , " + Email::get_description();
	return s;
}
