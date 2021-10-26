#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int x,y;
  cout << "Enter an integer: ";
  cin >> x;
  
  cout << "Enter another integer: ";
  cin >> y;

  cout << x << " + " << y << " is " << x + y << "." << endl;
  cout << x << " - " << y << " is " << x - y << "." << endl;

  return 0;
}