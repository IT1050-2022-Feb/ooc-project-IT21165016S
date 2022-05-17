#include<iostream> //header file
#include<string.h> //string header file
using namespace std;

//class declaration
class Report {
    //attributes
private:
    string name;
    string userID;

    //methods
public:
    Report ();
    Report (string Rname, string RuserID);
    void generateList();
    void updateList();

};

void listOfaddreminders(){}
void ListOfPublicEvent(){}
void listofFeedback(){}
void listofPayment(){}

//default constructor
Report::Report()
{
    name = "";
    userID = "";

}

//overload constructor
Report::Report(string nname, string uuserID)
{
   name=nname;
   userID=uuserID;

}
void Report::generateList() {}
void Report::updateList() {}

//begin of the main program
int main(){

    //create objects
    Report r1, r2, r3;

    //calling generateList() method
    r1.generateList();
    r1.generateList();
    r3.generateList();
  
    //calling updateList() method
    r1.updateList();
    r2.updateList();
    r3.updateList();
    
    return 0; // end of the main program
}
