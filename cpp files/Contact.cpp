#include"Contact.h"

       Address& Contact:: get_address(){
          return Contact::contact_address;
      };
      Email& Contact:: get_email(){
         return Contact::contact_email;
     };
      Phone_number& Contact:: get_phones(){
         return Contact::contact_phone;
     };
      Personal_details& Contact:: get_personal_details(){
         return Contact::contact_details;
     };
 bool Contact:: random_search(string search_term){
          bool found;
        const auto&person=Contact::contact_details.get();
         const auto&addrs=Contact::get_address().Get();
         const  auto&eml=Contact::contact_email.Get();
         const auto&phn=Contact::contact_phone.Get();
          for(auto&it:person){
            if(search_term==it.second){
                found=true;
                break;
            }
          }
          for(auto&it:addrs){
            auto&inner=it.second;
            for(auto&in:inner){
                if(search_term==in.second){
                   found=true;
                   break;
                }
            }
          }
          for(auto&it:eml){
            auto&inner=it.second;
            for(auto&in:inner){
                if(search_term==in.second){
                   found=true;
                    break;
                }
            }
          }
          for(auto&it:phn){
            auto&inner=it.second;
            for(auto&in:inner){
                if(search_term==in.second){
                   found=true;
                  break;
                }
            }
          }
          return found;
      }
      void Contact::print_contact(){
          cout<<Contact::contact_details.get()["first_name"]<<" "<<Contact::contact_details.get()["last_name"]<<" - "<<Contact::contact_details.get()["city"]<<endl;
      }
