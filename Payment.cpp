//IT21164408_Warunika H P R_MLB_08.01_05

#include <Subscription.h> //including header files
#include <Payment.h>
#include <iostream>
#include <string>
using namespace std;

Payment :: Payment() {}; //default constructor
Payment :: void addPayment() {}; //define functions
Payment :: void editPayment() {};
Payment :: void deletePayment() {};
Payment :: void validatePayment() {};
Payment :: void displayDetails() 
{
  cout << "Payment ID : " << paymentID << endl;
  cout << "Date : " << payment_date << endl;
  cout << "Description : " << payment_desc << endl;
  cout << "Amount : " << amount << endl;
}

Payment :: ~Payment() //default destructor
{
  cout << "Deleting payment " << paymentID << endl;
}