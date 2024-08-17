#ifndef PERSONAL_DETAILS_H_INCLUDED
#define PERSONAL_DETAILS_H_INCLUDED
#include<string>
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Personal_details{
public:
    void Read();
    void Add();
    void Edit();
    void Print_personal_details();
    unordered_map<string,string> get()const;
private:
    unordered_map<string,string>person_details;
    vector<string>order={"first_name","last_name","city","gender","adding_date"};
};


#endif // PERSONAL_DETAILS_H_INCLUDED
