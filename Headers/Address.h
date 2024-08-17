#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED
#include<string>
#include<unordered_map>
#include<map>
#include<vector>
#include<iostream>
using namespace std;
class Address{
public:
    void Read();
    void Print_addresses();
    map< int,unordered_map<string,string>>Get()const;
    void Add();
    void Edit();
    void Delete();
    int Edit_address_menu();

private:
   unordered_map<string,string>address;
   vector<string>order={"place","type","description"};
   map< int,unordered_map<string,string>>addresses;


};


#endif // ADDRESS_H_INCLUDED
