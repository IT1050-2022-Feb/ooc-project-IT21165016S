//IT21164408_Warunika H P R_MLB_08.01_05

#include <Subscription.h> //including header files
#include <Payment.h>
#include <iostream>
#include <string>
using namespace std;

Subscription :: Subscription() //implement the default constructor
{
	payment = new Payment; 
}

Subscription :: void addSubscription() {}; //define functions
Subscription :: void deleteSubscription() {};
Subscription :: void displayDetails() 
{
  cout << "Subscription type : " << subscription_type << endl;
  cout << "Subscription status : " << subscription_status << endl;
}

Subscription :: ~Subscription() //default destructor
{
  cout << "Deleting subscription" << endl;
	delete payment; 
}

