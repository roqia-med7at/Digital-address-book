#include"Phone_number.h"
void Phone_number::Read(){
     cout<<"Enter phone details:"<<endl;
    string str;
    cout<<"phone: ";
    std::getline(cin,str);
    Phone_number::phone["phone"]=str;
    cout<<endl<<"type: ";
    std::getline(cin,str);
    Phone_number::phone["type"]=str;
    cout<<endl<<"description: ";
    std::getline(cin,str);
    Phone_number::phone["description"]=str;
    cout<<endl;
}
void Phone_number::Add(){
     cout<<"How many phones you want to add: ";
    int n;
    cin>>n;
    cin.ignore();

    for(int i=1;i<=n;i++){
        Phone_number::Read();
        Phone_number::phones[Phone_number::phones.size()+i]=Phone_number::phone;

    }
    cout<<"emails added successfully"<<endl;
}
void Phone_number::Print_phones(){
    cout<<"phones: "<<endl;
    for( auto&it:Phone_number::phones){
        cout<<it.first<<": \n";
         auto&phne=it.second;
        for( auto& i:Phone_number::order){
                auto f=phne.find(i);
        if(f!=phne.end())
            cout<<i<<": "<<f->second<<endl;
        }
    }
}
void Phone_number::Delete(){
    cout<<"Enter index of phone you want to delete: ";
    int index;
    cin>>index;
    auto it=Phone_number::phones.find(index);
    if(it!=Phone_number::phones.end())
        Phone_number::phones.erase(it);
        else
            cout<<"this index is out of phones range"<<endl;
}
void Phone_number::Edit(){
    cout<<"Enter index of phone you want do edit: "<<endl;
     int index;
     cin>>index;
     cin.ignore();
     string str;
     auto it=Phone_number::phones.find(index);
     if(it!=Phone_number::phones.end()){
            auto& phne=it->second;
    cout<<"current phone: "<<phne["phone"];
    cout<<"\nEnter new phone or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty()){
        cout<<"\n we will keep the current"<<endl;}
        else{
        phne["phone"]=str;}
    cout<<"\n current type: "<<phne["type"];
    cout<<"\nEnter new type or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        phne["type"]=str;
    cout<<"\n current description: "<<phne["description"];
    cout<<"\nEnter new description or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        phne["description"]=str;
}
else
   cout<<"this index is out of phones range"<<endl;
}
map<int,unordered_map<string,string>> Phone_number::Get()const{
    return Phone_number::phones;
}
int Phone_number::Edit_phone_menu(){
    cout<<"Do you want to : "<<endl;
    cout<<"1.Add new phone\n";
    cout<<"2.Edit an existing phone\n";
    cout<<"3.Delete an existing phone\n";
    int op;
    cin>>op;
    return op;
}

