#include <iostream>
#include<cstring>
#include<Publlic_event.h>
#include<Publicevent_user.h>
using namespace std;
{
cout<<"User Details Default constructor called"<<"\n"<<endl;
cout << "User Name: " <<Name<<endl;;
cout << "User Address:" <<Address<<endl;
cout << "User Phone number:" <<P_NO<< endl;
cout << "User Email:" <<email<< endl;
cout<<  "User Birthday:"<<DOB<<endl; 
cout << "User Country:" <<Country<< endl;
} 
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