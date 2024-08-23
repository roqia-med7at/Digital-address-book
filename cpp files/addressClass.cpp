#include "addrssClass.h"
#include<iostream>
#include<string>
using namespace std;
void Address::set_place(string place) {
    if(place!=" ")
	Address::Place = place;
	else
        throw  invalid_argument("enter a valid place");
}
const string Address::get_place()const {
	return Address::Place;
}
void Address::set_type(string type) {
    if(type!=" ")
	Address::Type = type;
	else
        throw invalid_argument("enter a valid type");
}
const string Address::get_type()const {
	return Address::Type;
}
void Address::set_description(string descrepton) {
    if(descrepton!=" ")
	Address::Description = descrepton;
	else
        throw invalid_argument("enter a valid description");
}
const string Address::get_description()const {
	return Address::Description;
}
void Address::read_address() {
       string str;
		cout << endl << "Enter address details:" << endl;
		cout << "Place: ";
		//cin.ignore();
		getline(cin,str);
		Address::set_place(str);
		cout << endl << "Type \"(Home,Work,Other)\": ";

		getline(cin,str);
		Address::set_type(str);
		cout << endl << "Description: ";

		getline(cin,str);
		Address::set_description(str);
		cout << endl;

}
string Address::print_address() {
	string s= "- " + Address::get_type() + " : " + Address::get_place() + " , " +Address::get_description() ;
	return s;
}
