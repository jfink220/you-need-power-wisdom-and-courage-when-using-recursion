#include <iostream>
#include <string>
#include "src/TriangleNumberCalculator.hpp"
using namespace std;
int main() {
  TriangleNumberCalculator calculator;
  
  cout << calculator.value(1) << endl; // This should print out 1
  cout << calculator.value(2) << endl; // This should print out 3
  cout << calculator.value(4) << endl; // This should print out 10
  
  cout << calculator.add(1, 1) << endl; // This should print out 2
  cout << calculator.add(2, 3) << endl; // This should print out 9
  cout << calculator.add(4, 2) << endl; // This should print out 13
  
  cout << calculator.subtract(1, 1) << endl; // This should print out 0
  cout << calculator.subtract(2, 3) << endl; // This should print out -3
  cout << calculator.subtract(4, 2) << endl; // This should print out 7

  cout << calculator.multiply(1,1) << endl; // This should print out 1
  cout << calculator.multiply(2,3) << endl; // This should print out 18
  cout << calculator.multiply(4,2) << endl; // This should print out 30

  cout << calculator.divide(1,1) << endl; // This should print out 1
  cout << calculator.divide(2,3) << endl; // This should print out 0.5
  cout << calculator.divide(4,2) << endl; // This should print out 3.333 (rounded for simplicity)

}
