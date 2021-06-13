#include <iostream>

using namespace std;


int main() {
    double iP;
    double total;
    double tax;
    
    cout << "enter the amount of items purchased";
    cin >> iP;
    tax = iP * 0.07;
    total = iP + tax;
    cout << "Your items purchased + taxs = " << total << "$" << endl;
    return 0;
}
