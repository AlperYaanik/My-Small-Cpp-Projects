#include <string> 

class Account {//Account Class
public:
Account(std::string Accountname, int Accountnumber) :name(Accountname){
  AccountSum(Accountnumber);
}
void setName(std::string Accountname){//Set Name
  name=Accountname;
}
std::string getName() const{//Get Name  
  return name;
}
void AccountSum(int Accountnumber){//Set Input number
  number=Accountnumber;
  }
int getSum() const{//Get Input number
  return number;
}
private://Private variables
std::string name;
int number{0};
};
