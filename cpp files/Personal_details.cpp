#include"Personal_details.h"
unordered_map<string,string>Personal_details::get()const{
    return Personal_details::person_details;
}
void Personal_details::Read(){
    cout<<"Enter contact personal details: "<<endl;
    string str;
    cout<<"First_Name: ";
    getline(cin,str);
    Personal_details::person_details["first_name"]=str;
    cout<<"\n Last_Name: ";
    getline(cin,str);
    Personal_details::person_details["last_name"]=str;
    cout<<"\n city: ";
    getline(cin,str);
    Personal_details::person_details["city"]=str;
    cout<<"\n Gender: ";
    getline(cin,str);
    Personal_details::person_details["gender"]=str;
    cout<<"\n Adding_Date: ";
    getline(cin,str);
    Personal_details::person_details["adding_date"]=str;
    cout<<endl;
}
void Personal_details::Edit(){
    string str;
    cout<<"current first_name: "<<Personal_details::person_details["first_name"]<<endl;
    cout<<"Enter new first_name or press Enter to keep current: ";
    cin.ignore();
    getline(cin,str);
    if(str.empty())
        cout<<"we will keep the current"<<endl;
    else{
        Personal_details::person_details["first_name"]=str;}

        cout<<"current last_name: "<<Personal_details::person_details["last_name"]<<endl;
    cout<<"Enter new last_name or press Enter to keep current: ";
    getline(cin,str);
    if(str.empty())
        cout<<"we will keep the current"<<endl;
    else
        Personal_details::person_details["last_name"]=str;

    cout<<"current city: "<<Personal_details::person_details["city"]<<endl;
    cout<<"Enter new city or press Enter to keep current: ";
    getline(cin,str);
    if(str.empty())
        cout<<"we will keep the current"<<endl;
    else
        Personal_details::person_details["city"]=str;

    cout<<"current gender: "<<Personal_details::person_details["gender"]<<endl;
    cout<<"Enter new gender or press Enter to keep current: ";
    getline(cin,str);
    if(str.empty())
        cout<<"we will keep the current"<<endl;
    else{
        Personal_details::person_details["gender"]=str;}
        cout<<"personal_details updated successfully"<<endl;
}
void Personal_details::Print_personal_details(){
cout<<"Personal_details: "<<endl;
  for( int i=0;i<(int)(Personal_details::order.size());i++){
       auto&s=Personal_details::order[i];
       cout<<s<<": "<<Personal_details::person_details[s]<<endl;

    }

}
