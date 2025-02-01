#include <iostream>
using namespace std;

int main() {
  int day;
  cin >> day;

  switch(day) {
    case 1:
      cout << "Sunday";
      break;
    
    case 2:
      cout << "Monday";
      break;

    case 3:
      cout << "Tuesday";
      break;
    
    case 4:
      cout << "Wednesday";
      break;
    
    case 5:
      cout << "Thursday";
      break;
    default:
      cout << "holiday";
    }
}