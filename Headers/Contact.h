#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED
#include"Personal_details.h"
#include"Address.h"
#include"Email.h"
#include"Phone_number.h"
#include<iostream>
#include<string>
using namespace std;
class Contact{
 public:
     void read_contact();
      Address& get_address();
      Email& get_email();
      Phone_number& get_phones();
      Personal_details& get_personal_details();
      bool random_search(string search_term);
      void print_contact();

 private:
    Personal_details contact_details;
    Address contact_address;
    Email contact_email;
    Phone_number contact_phone;
};


#endif // CONTACT_H_INCLUDED
