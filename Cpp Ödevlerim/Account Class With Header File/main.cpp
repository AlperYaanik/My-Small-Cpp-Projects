#include <iostream> 
#include <string>
#include "Account.h" //Include the header file
using namespace std; 

int main()  
{  // Create Account Objects and Print Their Sum
  Account account1{"Tax",300};
  Account account2{"Outcome",200};
  cout<< "Sum of "<< account1.getName() << " and " <<     
  account2.getName() << " is " <<   
  account1.getSum()+account2.getSum()<<endl;
  
}
