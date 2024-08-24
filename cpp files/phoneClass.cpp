#include "phoneClass.h"
void Phone_Number::set_phone(string phon) {
    if(phon!=" ")
	Phone_Number::Phone = phon;
	else
        throw invalid_argument("enter a valid phone number");
}
const string Phone_Number::get_phone()const {
	return Phone_Number::Phone;

}
void Phone_Number::set_type(string type) {
    if(type!=" ")
	Phone_Number::Type = type;
	else
        throw invalid_argument("enter a valid type");

}
const string Phone_Number::get_type()const {
	return Phone_Number::Type;
}
void Phone_Number::set_description(string descrepton) {
    if(descrepton!=" ")
	Phone_Number::Description = descrepton;
	else
        throw invalid_argument("enter a valid description");

}
const string Phone_Number::get_description()const {
	return Phone_Number::Description;

}
void Phone_Number::read_phone() {

		cout << endl << "Enter phone number details:" << endl;
		string str;
		cout << "Phone: ";
		//cin.ignore();
		getline(cin,str);
		Phone_Number::set_phone(str);
		cout << endl << "Type\"(Mobile,Home,Work)\": ";

		getline(cin,str);
		Phone_Number::set_type(str);
		cout << endl << "Description: ";

		getline(cin,str);
		Phone_Number::set_description(str);
		cout << endl;
}
string Phone_Number::print_phone() {
	string s= "- " + Phone_Number::get_type() + " : " + Phone_Number::get_phone() + " , " + Phone_Number::get_description();
	return s;
}
