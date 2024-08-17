#include"Email.h"
void Email::Read(){
     cout<<"Enter email details:"<<endl;
    string str;
    cout<<"email: ";
    std::getline(cin,str);
    Email::email["email"]=str;
    cout<<endl<<"type: ";
    std::getline(cin,str);
    Email::email["type"]=str;
    cout<<endl<<"description: ";
    std::getline(cin,str);
    Email::email["description"]=str;
    cout<<endl;
}
void Email::Add(){
    cout<<"How many emails you want to add: ";
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        Email::Read();
        Email::emails[Email::emails.size()+i]=Email::email;

    }
    cout<<"emails added successfully"<<endl;
}
void Email::Print_emails(){
    cout<<"emails: "<<endl;
    for( auto&it:Email::emails){
        cout<<it.first<<": \n";
         auto&eml=it.second;
        for( auto& i:Email::order){
                auto f=eml.find(i);
        if(f!=eml.end())
            cout<<i<<": "<<f->second<<endl;
        }
    }
}
void Email::Delete(){
    cout<<"Enter index of email you want to delete: ";
    int index;
    cin>>index;
    auto it=Email::emails.find(index);
    if(it!=Email::emails.end())
        Email::emails.erase(it);
        else
            cout<<"this index is out of emails range"<<endl;

}
void Email::Edit(){
    cout<<"Enter index of email you want do edit: "<<endl;
     int index;
     cin>>index;
     cin.ignore();
     string str;
     auto it=Email::emails.find(index);
     if(it!=Email::emails.end()){
            auto& eml=it->second;
    cout<<"current email: "<<eml["email"];
    cout<<"\nEnter new email or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty()){
        cout<<"\n we will keep the current"<<endl;}
        else{
        eml["email"]=str;}
    cout<<"\n current type: "<<eml["type"];
    cout<<"\nEnter new type or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        eml["type"]=str;
    cout<<"\n current description: "<<eml["description"];
    cout<<"\nEnter new description or press Enter to keep current: ";
   // cin.ignore();
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        eml["description"]=str;
}
else
   cout<<"this index is out of emails range"<<endl;
}
 map<int,unordered_map<string,string>> Email::Get()const{
     return Email::emails;
 }
 int Email::Edit_email_menu(){
     cout<<"Do you want to : "<<endl;
    cout<<"1.Add new email\n";
    cout<<"2.Edit an existing email\n";
    cout<<"3.Delete an existing email\n";
    int op;
    cin>>op;
    return op;
 }

