#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED
#include<string>
#include<unordered_map>
#include<map>
#include<vector>
#include<iostream>
using namespace std;
class Email{
public:
    void Read();
    void Print_emails();
    map<int,unordered_map<string,string>> Get()const;
    void Add();
    void Edit();
    void Delete();
    int Edit_email_menu();
private:
     unordered_map<string,string>email;
   vector<string>order={"email","type","description"};
   map<int,unordered_map<string,string>>emails;
};


#endif // EMAIL_H_INCLUDED
