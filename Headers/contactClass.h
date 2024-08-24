#ifndef CONTACTCLASS_H_INCLUDED
#define CONTACTCLASS_H_INCLUDED
#include"personal_detailsClass.h"
#include"emailClass.h"
#include"addrssClass.h"
#include"phoneClass.h"
#include<map>
#include<iostream>
using namespace std;
class Contact {
public:

    map<string,Address>& get_addresses();
    map<string,Email>& get_emails();
    map<string,Phone_Number>& get_phones();
    Personal_details& get_personal_details();
    const int get_id()const;
    void  set_id(int id);
	void Read(int id);
	void display();
	void print();



private:
	int ID=0;
	Personal_details personal_details;
	map<string,Address>addresses;
	map<string,Email>emails;
	map<string,Phone_Number>phone_numbers;


};


#endif // CONTACTCLASS_H_INCLUDED
