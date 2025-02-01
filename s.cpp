#include <iostream>
using namespace std;

int main() {
  // show memory sizes
  cout << "Size of different data types in bytes: " << endl;
  cout << "char: " << sizeof(char) << endl;
  cout << "int: " << sizeof(int) << endl;
  cout << "float: " << sizeof(float) << endl;
  cout << "double: " << sizeof(double) << endl;

  int x = 10;
  int *ptr = &x;

  cout << "\nPointer arithmetic: " << endl;
  cout << "Addresses of x: " << ptr << endl;
  cout << "Next int address: " << ptr + 1 << endl;

  return 0;
}

