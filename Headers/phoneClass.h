#ifndef PHONECLASS_H_INCLUDED
#define PHONECLASS_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Phone_Number {
public:
	void set_phone(string phon);
	const string get_phone()const;
	void set_type(string type);
	const string get_type()const;
	void set_description(string descrepton);
	const string get_description()const;
	void read_phone();
	string  print_phone();
private:
	string Phone;
	string Type;
	string Description;
};


#endif // PHONECLASS_H_INCLUDED
