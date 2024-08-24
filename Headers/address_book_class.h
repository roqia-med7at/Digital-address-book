#ifndef ADDRESS_BOOK_CLASS_H_INCLUDED
#define ADDRESS_BOOK_CLASS_H_INCLUDED
#include "address_book_manager_class.h"
#include "menuClass.h"
#include<iostream>
using namespace std;
class Address_book {
public:
	void Run();
private:
	Manager book_manager;
	Menues book_menues;

};


#endif // ADDRESS_BOOK_CLASS_H_INCLUDED
