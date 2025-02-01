#include <iostream>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularize the code
// Functions are used to increase readability
// Functions are used to use same code multiple time
// void 
// return
// parameterized
// non-parameterized
// void printName(string name){
//   cout << "Hey " << name << endl;
// }

// int sum(int num1, int num2) {
//   int num3 = num1 + num2;
//   return num3;
// }

void doSomething(int &num) {
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}

int main() {
  int num = 10;
  doSomething(num);
  cout << num << endl;
  cout << &num << endl;
  return 0;
}