//base class
using namespace std;
#include <string>
class User{
protected:
  string name;
  string address;
  int mobileNo;
  string email;
  string dob;
  string country;

public:
  User();

  User(string uname,string uaddress,int umobileNo,string uemail,string udob,string ucountry);

  //this is a abstract class.
  virtual void displayDetails() = 0;

  //dependecy relationship with Report Class
  void searchPublicEvent(string name, Report *r);

};