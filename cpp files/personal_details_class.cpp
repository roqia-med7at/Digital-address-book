#include"personal_detailsClass.h"
#include<stdexcept>
const string Personal_details:: get_first_name()const{
    return Personal_details::first_name;
};
    void Personal_details::set_frst_name(string str){
        if(str!=" "){
            Personal_details::first_name=str;
        }
        else
            throw invalid_argument("you should enter a valid name");
    };
    const string Personal_details::get_last_name()const{
        return Personal_details::last_name;
    };
    void Personal_details::set_last_name(string str){
        if(str!=" "){
            Personal_details::last_name=str;
        }
        else
            throw invalid_argument("you should enter a valid name");
    };
    const string Personal_details::get_city()const{
        return Personal_details::city;
    };
    void Personal_details:: set_city(string str){
        if(str!=" "){
            Personal_details::city=str;
        }
        else
             throw invalid_argument("you should enter a valid string");
    };
    const string Personal_details::get_gender()const{
        return Personal_details::gender;
    };
    void Personal_details::set_gender(string str){
        if(str!=" "){
            Personal_details::gender=str;
        }
        else
            throw invalid_argument("you should enter a valid string");
    };
    const string Personal_details::get_added_date()const{
        return Personal_details::added_date;
    };
    void Personal_details::set_added_date(string date){
        if(date!=" ")
            Personal_details::added_date=date;
        else
         throw invalid_argument("enter a valid date");
    };
    void Personal_details::read(){
        string str;
	cout << "Enter user details" << endl;
	cout << "First name: ";
	//cin.ignore();
	getline(cin,str);
	Personal_details::set_frst_name(str);
	cout << endl << "Last name: ";

	getline(cin,str);
	Personal_details::set_last_name(str);
	cout << endl << "Gender: ";

	getline(cin,str);
	Personal_details::set_gender(str);
	cout << endl << "City: ";

	getline(cin,str);
	Personal_details::set_city(str);
	cout<<endl<<"Date: \(YYYY - MM -DD\)";
	getline(cin,str);
	Personal_details::added_date=str;
	cout<<endl;
    };

    string Personal_details::print(){
        string str="-"+Personal_details::first_name+" "+Personal_details::last_name+", "+Personal_details::city+", "+Personal_details::gender;
        return str;

    };
