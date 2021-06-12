#include <iostream>
using namespace std;

int main() {
    double mdgl;
    int gal;
    int mil;
    
    cout << "enter Gallons used for the trip" << endl;
    cin >> gal;
    cout << "Enter amount of miles: " << endl;
    cin >> mil;
    mdg = (double) mil / gal;
    cout << "You travled" << mdg << "miles per gallons" << endl;
    return 0;
}