#include <iostream>
using namespace std;
#include "Guest_user.h"



Guest_user::Guest_user(){
  name = "No value";
  address = "No value";
  mobileNo = 0000000000;
  email = "No value";
  dob =  "No value";
  country = "No value";
}

Guest_user::Guest_user(string gname,string gaddress,int gno,string gmail,string gdob,string gcountry){
    name = gname;
    address = gaddress;
    mobileNo = gno;
    email = gmail;
    dob = gdob;
    country = gcountry;
}

//overriding displayDetails function
void displayDetails(){
  cout << name <<endl << address <<endl << mobileNo <<endl << email <<endl << dob <<endl << country << endl;
  }

Guest_user::~Guest_user(){
  
  cout << "Destructor called for Guest_user object" << endl;
}