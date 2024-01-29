#include <iostream>
#include <list>
using namespace std;

int main() {
  
  // Create a list containing integers
  list<int> mylist = {5, 2, 8, 9, 6, 3, 1, 7, 4, 10};
  list<int> oddnumbers;
  cout << "Unchanged List: ";
  for (const int &num : mylist) {
    cout << num << " ";
  }
  cout << endl;
  
  // Remove even numbers from the list
  cout << "List Only Odd Numbers: ";
  for (const int &num : mylist) {
    if (num % 2 == 1) {
      oddnumbers.push_back(num);
      cout << num << " ";
    }
  }
  cout << endl;
  
  // Sort the remaining numbers in descending order
  int n = oddnumbers.size();
  bool swapped;
  do {
    swapped = false;
    auto it1 = oddnumbers.begin();
    auto it2 = next(it1);
    for (int i = 0; i < n - 1; ++i) {
      if (*it1 < *it2) {
        swap(*it1, *it2);
        swapped = true;
      }
      ++it1;
      ++it2;
    }
    --n;
  } while (swapped);

  // Print the sorted list
  cout << "Sorted List: ";
  for (const int &num : oddnumbers) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
