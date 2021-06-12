#include <iostream>

using namespace std;

int main() {
    string lastName;
    int score1;
    int score2;
    double avg;
    
    cout << "enter last name: ";
    cin >> lastName;
    cout << "enter test score1: ";
    cin >> score1;
    cout << "enter score2: ";
    cin >> score2;
    avg = (double) (score1 + score2) / 2;
    cout << lastName << " your test average is: " << avg << endl;
    return 0;
}
