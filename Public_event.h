//public event
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
~PublicEvent();
}
  //implementation
void displaypublicevent(User*u)
{
  pEventName = User*u.
  cout<<"Public Event Default constructor called "<<"\n"<<endl;
cout <<pEventName<< endl;
cout << pdate << endl;
cout<<pevent_description<<"\n"<<endl;
}
};