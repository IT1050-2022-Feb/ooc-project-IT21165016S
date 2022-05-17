//derived class from User class
using namespace std;
#include <string>
#include "User.h"
#define SIZE 5

class Registered_user : public User{
protected:
  string userID;
  string password;
  bool login_status;
  Reminder *r[SIZE]; //Uni-directional association relationship with Reminder class
public: 
  Registered_user();

 Registered_user(string rname,string raddress,int rno,string rmail,string rdob,string rcountry,string id, string pw,bool logstatus);

  void verify_login(string userID,string password);

  void getSubscription(Subscription *s);  //dependecy relationship with Subscription Class

  void displayDetails();

 ~Registered_user();
};