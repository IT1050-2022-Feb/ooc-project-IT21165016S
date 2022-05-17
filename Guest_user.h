//derived class from User class
#include "User.h"

class Guest_user : public User{
public:
Guest_user();

Guest_user(string gname,string gaddress,int gno,string gmail,string gdob,string gcountry);

void displayDetails();

~Guest_user();

};
