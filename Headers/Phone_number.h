#ifndef PHONE_NUMBER_H_INCLUDED
#define PHONE_NUMBER_H_INCLUDED
#include<map>
#include<string>
#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;
class Phone_number{
public:
    void Read();
    void Print_phones();
    map<int,unordered_map<string,string>>Get()const;
    void Add();
    void Edit();
    void Delete();
    int Edit_phone_menu();
private:
     unordered_map<string,string>phone;
   vector<string>order={"phone","type","description"};
   map<int,unordered_map<string,string>>phones;
};


#endif // PHONE_NUMBER_H_INCLUDED
