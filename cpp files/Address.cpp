#include"Address.h"
void Address::Read(){
    cout<<"Enter address details:"<<endl;
    string str;
    cout<<"place: ";
    std::getline(cin,str);
    Address::address["place"]=str;
    cout<<endl<<"type: ";
    std::getline(cin,str);
    Address::address["type"]=str;
    cout<<endl<<"description: ";
    std::getline(cin,str);
    Address::address["description"]=str;
    cout<<endl;
}
void Address::Add(){
    cout<<"How many addresses you want to add: ";
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
            Address::Read();
        Address::addresses[Address::addresses.size()+i]=Address::address;
    }
    cout<<"addresses added successfully"<<endl;
}

void Address::Print_addresses( ){
    cout<<"addresses: "<<endl;
    for( auto&it:Address::addresses){
            cout<<it.first<<":"<<endl;
             auto&adrs=it.second;
           for(int i=0;i<(int)(Address::order.size());i++){
                cout<<Address::order[i]<<": "<<adrs[Address::order[i]]<<endl;


            }
    }
}
void Address::Delete(){
     cout<<"Enter index of address you want do delete: ";
     int index;
     cin>>index;
     auto it=Address::addresses.find(index);
     if(it!=Address::addresses.end())
        Address::addresses.erase(it);
        else
            cout<<"this index is out of addresses range"<<endl;
}
void Address::Edit(){
    cout<<"Enter index of address you want do edit: "<<endl;
     int index;
     cin>>index;
     cin.ignore();
     string str;
     auto it=Address::addresses.find(index);
     if(it!=Address::addresses.end()){
            auto& adrs=it->second;
    cout<<"current place: "<<adrs["place"];
    cout<<"\nEnter new place or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty()){
        cout<<"\n we will keep the current"<<endl;}
        else{
        adrs["place"]=str;}
    cout<<"\n current type: "<<adrs["type"];
    cout<<"\nEnter new type or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        adrs["type"]=str;
    cout<<"\n current description: "<<adrs["description"];
    cout<<"\nEnter new description or press Enter to keep current: ";
    std::getline(cin,str);
    if(str.empty())
        cout<<"\n we will keep the current"<<endl;
        else
        adrs["description"]=str;
}
else
   cout<<"this index is out of addresses range"<<endl;
}

int Address::Edit_address_menu(){
    cout<<"Do you want to : "<<endl;
    cout<<"1.Add new address\n";
    cout<<"2.Edit an existing address\n";
    cout<<"3.Delete an existing address\n";
    int op;
    cin>>op;
    return op;

}
 map<int,unordered_map<string,string>>Address::Get()const{
     return Address::addresses;
 }

