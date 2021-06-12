#include <iostream>

using namespace std;
int main() {
  int int1;
  int int2;
  int sum;
  int product;
  int difference;
  cout << "enter input 1: ";
  cin >> int1;
  cout << "enter input 2: ";
  cin >> int2;
  difference = int1 - int2;
  sum = int1 + int2;
  product = int1 * int2;
  cout << "sum = " << sum << ", product= " << product << ", difference= " << difference << endl;
  return 0;
}