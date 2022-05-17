#include "User.h"
#include <string>

User::User(){
    name = "No value";
    address = "No value";
    mobileNo = 0000000000;
    email = "No value";
    dob = "No value";
    country = "No value";
  }

User::User(string uname,string uaddress,int umobileNo,string uemail,string udob,string ucountry){
  name = uname;
  address = uaddress;
  mobileNo = umobileNo;
  email = uemail;
  dob = udob;
  country = ucountry;
}

void User::searchPublicEvent(string name, Report *r){
  
}

