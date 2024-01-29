#include <cstdint>
#include <iostream>
#include <random>
#include <stack>
#include <ctime>

int main() {
  //Creating Poisson Distribution Generator And Stack
  std::stack<int> myStack;
  uint8_t stackSize = 10;
  std::default_random_engine 
    engine(static_cast<int> (time(0)+stackSize));
  std::poisson_distribution<int16_t> poisson_distribution(8);
  
  //Adding Values To Stack
  short int sum = 0;
  std::cout << "Stack(";
  for (auto i = 1; i <= stackSize; ++i) {
    int16_t number = poisson_distribution(engine);
    myStack.push(number);
    sum += myStack.top();//Finding Sum Of Values
    (i != 10) ? std::cout << myStack.top() << "<-" : 
    std::cout << myStack.top();
  }
  std::cout << ")" << std::endl;

  //Finding Max Element
  int16_t maxElement = myStack.top();
  while (!myStack.empty()) {
    int16_t currentElement = myStack.top();
    if (currentElement > maxElement) {
      maxElement = currentElement;
    }
    myStack.pop();
  }
  
  //Printing Maximum Value and Sum Of Stack
  std::cout << "Maximum Value: " << maxElement << std::endl;
  std::cout << "Sum of Stack: " << sum << std::endl;

  return 0;
}
