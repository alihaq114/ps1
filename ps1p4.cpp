#include <iostream>

using namespace std;

int main() {
    double aof;
    double tip;
    
    cout << "enter amount of meal: ";
    cin >> aof;
    tip = aof * 0.15;
    cout << "Your Tip is: " << tip << "$" << endl;
    return 0;
}
