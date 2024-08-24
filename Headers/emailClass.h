#ifndef EMAILCLASS_H_INCLUDED
#define EMAILCLASS_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Email {
public:
	void set_email(string em);
	const string get_email()const;
	void set_type(string type);
	const string get_type()const;
	void set_description(string descrepton);
	const string get_description()const;
	void read_email();
    string print_email();
private:
	string Email;
	string Type;
	string Description;
};


#endif // EMAILCLASS_H_INCLUDED
