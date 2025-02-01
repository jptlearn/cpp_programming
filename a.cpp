// Write a program that takes an input of age and prints if you are adult or not

// #include <iostream>
// using namespace std;

// int main() {
//   int age;
//   cout << "Enter you age: ";
//   cin >> age;

//   if (age >= 18) {
//     cout << "You are adult" << endl;
//   } else {
//     cout << "You are not adult" << endl;
//   }
//   return 0;
// }


#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter your marks: ";
  cin >> marks;

  if (marks >= 90) {
    cout << "A";
  }
  else if (marks > 60)
  {
    cout << "B";
  }
  else if (marks > 50)
  {
    cout << "C";
  }
  else if (marks > 45)
  {
    cout << "D";
  }
  else if (marks > 25)
  {
    cout << "E";
  }
  else if ( marks > 0)
  {
    cout << "F";
  }
  else
  {
    cout << "Invalid marks.";
  }

  return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//   int marks;
//   cout << "Enter your marks: ";
//   cin >> marks;

//   switch(marks) {
//     case(marks < 25) {
//       cout << "F";
//       break;
//     }
//     case(marks < 40) {
//       cout << "E";
//       break;
//     }
//     case (marks < 60) {
//       cout << "C";
//     }

//     case (marks < 80) {
//       cout << "B";
//       break;
//     }

//     case(marks < 95) {
//       cout << "A";
//       break;
//     }

//     case (marks <= 100) {
//       cout << "A+";
//       break;
//     }



//   }
//   return 0;
// }