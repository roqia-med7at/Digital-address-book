#ifndef PERSONAL_DETAILSCLASS_H_INCLUDED
#define PERSONAL_DETAILSCLASS_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Personal_details{
public:
    const string get_first_name()const;
    void set_frst_name(string str);
    const string get_last_name()const;
    void set_last_name(string str);
    const string get_city()const;
    void set_city(string str);
    const string get_gender()const;
    void set_gender(string str);
    const string get_added_date()const;
    void set_added_date(string date);
    void read();
    string print();


private:
    string first_name;
    string last_name;
    string city;
    string gender;
    string added_date;

};


#endif // PERSONAL_DETAILSCLASS_H_INCLUDED
