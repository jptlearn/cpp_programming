#include <iostream>
using namespace std;

int main() {
  // Pointers are variables that store the address of other variables
  // int a = 10;
  // int *aptr;
  // aptr = &a;
  // cout << a << endl;
  // cout << &a << endl;
  // cout << aptr << endl;
  // cout << *aptr << endl;
  // *aptr = 11;
  // cout << a << endl;

  // Pointer Arithmetic
  // int a = 10;
  // int *aptr = &a;
  // cout << aptr << endl; // 0x16fda7168
  // cout << &a << endl; // 0x16fda7168
  // aptr++;
  // cout << aptr << endl; // 0x16fda716c

  int arr[] = {1, 2, 3};
  cout << *arr << endl;
  cout << arr;

  int *ptr = arr;
  for (int i = 0; i < 3; i++) {
    cout << *ptr << endl;
    ptr++;
  }

  return 0;
}