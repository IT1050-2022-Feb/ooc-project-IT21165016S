#include <iostream>
using namespace std;
#include "Registered_user.h"
#include <string>


Registered_user::Registered_user()
{
    name = "No value";
    address = "No value";
    mobileNo =  0000000000;
    email = "No value";
    dob = "No value";
    country = "No value";
    userID = "No value";
    password = "No value";
    login_status = true;
  
}
//implementation
void displayuserdetails(){};
Registered_user::Registered_user(string rname,string raddress,int rno,string rmail,string rdob,string rcountry,string id, string pw,bool logstatus){
    name = rname;
    address = raddress;
    mobileNo = rno; 
    email = rmail;
    dob = rdob;
    country = rcountry;
    userID = id;
    password = pw;
    login_status = logstatus;
  }

 void Registered_user::verify_login(string userID,string password){
   
 }

void Registered_user::getSubscription(Subscription *s){
  
}

//overriding displayDetails function
 void Registered_user::displayDetails(){
  cout << name <<" "<< address <<" "<< mobileNo <<" "<< email <<" "<< dob <<" "<< country <<" "<< userID     <<" "<< password <<" "<< login_status << endl;
}

 Registered_user::~Registered_user(){
   cout << "Destructor called for Registered_user object" << endl;
 }
