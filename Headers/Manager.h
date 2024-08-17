#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED
#include<map>
#include<string>
#include<iostream>
#include"Menues.h"
#include"Contact.h"
using namespace std;
class Manager{
public :
    void Add_contact(int id);
    void Display_contacts();
    void Edit_contact(int id);
    void Delete_contact(int id);
    void Search_contact();
    void print_all(int id);
private:
    int id;
    Contact current_contact;
    map<int,Contact>contacts;
    Menues contact_menu;
};


#endif // MANAGER_H_INCLUDED
