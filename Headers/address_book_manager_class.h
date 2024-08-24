#ifndef ADDRESS_BOOK_MANAGER_CLASS_H_INCLUDED
#define ADDRESS_BOOK_MANAGER_CLASS_H_INCLUDED
#include<map>
#include<string>
#include "contactClass.h"
#include"emailClass.h"
#include"addrssClass.h"
#include"phoneClass.h"
#include "menuClass.h"
#include<iostream>
using namespace std;
class Manager {
public:
	void Add_contact(int id);
	void Edit_contact(int id);
	void Delete_contact(int id);
	void Search_contact();
	void Display_contacts();
private:
	Contact current_contact;
    map <int, Contact>mp;
    Menues mn;
};




#endif // ADDRESS_BOOK_MANAGER_CLASS_H_INCLUDED
