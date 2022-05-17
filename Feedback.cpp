/*IT21165016_R.M.S.Kawya*/
#include <iostream>
#include<cstring>
using namespace std;
class Feedback//base class 
{ 
private:
  string  Comment;
  int f_rate;
public:
Feedback(){}
Feedback(string U_comment,int U_frate){ 
Comment=U_comment;
f_rate=U_frate;

}
void sendFeedback(RegisteredUser*r){}//dependency relationship with registered user
void displayFeedback()
{
cout << "comment" << Comment<< endl;
cout <<"rate" << f_rate << endl;
}
};
class RegisteredUser//Derived class
{
protected:
string userID;
string password;
public:
RegisteredUser(){}
RegisteredUser(string UID,string U_PW){
userID= UID;
password =U_PW;
}
void display()
{
cout << "User ID: " <<userID << endl;
cout << "User Password:" << password<< endl;
} 
};
int main()
{
Feedback *f1;
f1= new Feedback( "Thank you for this experience !",4);
RegisteredUser*R1;
R1= new RegisteredUser("ID10362678" , "enter");
R1->display();
f1->display();
delete R1;
delete f1;
}
cout<<"Feedback Default constructor called"<<"\n"<<endl;
cout <<"Comment:" <<Comment<< endl;
cout <<"Rate "<<f_rate << endl;
}
};

class RegisteredUser
{
protected:
string userID;
string password;
public:
RegisteredUser(string UID,string U_PW){
userID= UID;
password =U_PW;
}
void display()
{
cout<<"Registered user Default constructor called"<<"\n"<<endl;
cout << "User ID: " <<userID<< endl;
cout << "User Password:" << password<<"\n"<< endl;
} 
};
int main()
{
Feedback *f1;
f1= new Feedback( "Thank you for this experience!!",4);
RegisteredUser*R1;
R1= new RegisteredUser("ID10362678","12345");
R1->display();
f1->displayFeedback();

PublicEvent *PE1;
PE1= new PublicEvent("Vesak Poyaday","15/05/2022","It commemorates the birth, enlightenment, and death of the Buddha, which are all said to have happened on the same date. It is held around the month of May or Vesak, based on the lunar calendar." );
delete f1;
delete R1;

}