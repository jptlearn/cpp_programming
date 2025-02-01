#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  cout << "from swap " << "a :" << a << " b is: " << b << endl;
}
int main() {
  int a = 2;
  int b = 3;
  swap(a, b);
  cout << a << " " << b << endl;
  return 0;
}