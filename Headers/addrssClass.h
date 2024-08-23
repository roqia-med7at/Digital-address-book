#ifndef ADDRSSCLASS_H_INCLUDED
#define ADDRSSCLASS_H_INCLUDED
#include<string>
using namespace std;
class Address {
public:
	void set_place(string place);
	const string get_place()const;
	void set_type(string type);
	const string get_type()const;
	void set_description(string descrepton);
	const string get_description()const;
	void read_address();
	string print_address();
private:
	string Place;
	string Type;
	string Description;
};


#endif // ADDRSSCLASS_H_INCLUDED
