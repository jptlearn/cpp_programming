// #include <iostream>
// #include <array>
// #include <vector>
// using namespace std;

// int main() {
//   int arr[5];
//   for (int i = 0; i < 5; i++) {
//     cin >> arr[i];
//   }
//   int lenOfArr = sizeof(arr) / sizeof(arr[0]);
//   cout << lenOfArr << endl;
//   array<int, 5> modern_arr;
//   vector<int> vec(5);

//   cout << modern_arr.size() << endl;
//   cout << vec.size() << endl;
//   string str = "hello";
//   cout << str.size() << endl;
//   return 0;
// }


#include <iostream>
using namespace std;

void doSomething(int arr[], int n) {
  arr[0] += 100;
  cout << "Value of inside functions: " << arr[0] << endl;
}

int main() {
  int n = 5;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  doSomething(arr, n);
  cout << "Value inside main function: " << arr[0] << endl;
  return 0;
}