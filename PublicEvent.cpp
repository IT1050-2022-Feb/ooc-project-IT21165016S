/*IT21165016_R.M.S.Kawya*/
#include <iostream>
#include<cstring>
using namespace std;
class PublicEvent
{ 
private:
  string pEventName;
  string pdate;
  string pevent_description;
public:
PublicEvent(){}
PublicEvent(string U_pEventName,string U_pdate,string U_peventdescription){ 
pEventName=U_pEventName;
pdate=U_pdate;
pevent_description=U_peventdescription;
}
void displaypublicevent(User*u)
{
  pEventName = User*u.
  cout<<"Public Event Default constructor called "<<"\n"<<endl;
cout <<pEventName<< endl;
cout << pdate << endl;
cout<<pevent_description<<"\n"<<endl;
}
};
class User
{
protected:
string Name;
string Address;
int P_NO;
string email;
string DOB;
string Country;
public:
User(){}
User(string U_Name,string U_Address,int U_PNO,string U_email,string U_DOB,string U_Country){
Name=U_Name;
Address=U_Address;
P_NO=U_PNO;
email=U_email;
DOB=U_DOB;
Country=U_Country;

}

void displayuserdetails()
{
cout<<"User Details Default constructor called"<<"\n"<<endl;
cout << "User Name: " <<Name<<endl;;
cout << "User Address:" <<Address<<endl;
cout << "User Phone number:" <<P_NO<< endl;
cout << "User Email:" <<email<< endl;
cout<<  "User Birthday:"<<DOB<<endl; 
cout << "User Country:" <<Country<< endl;
} 
};
int main()
{
PublicEvent *PE1;
PE1= new PublicEvent("Vesak Poyaday","15/05/2022","It commemorates the birth, enlightenment, and death of the Buddha, which are all said to have happened on the same date. It is held around the month of May or Vesak, based on the lunar calendar." );
User*U1;
U1= new User("Shasthri Kawya","100/2,Balummahara,Mudungoda",072113144,"shasthrikawya@gmail.com","07/12/1997","New Zelend");
PE1->displaypublicevent();
U1->displayuserdetails();

delete PE1;
delete U1;
return 0;
}