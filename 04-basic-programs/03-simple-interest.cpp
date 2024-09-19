// Calculate simple interest = (p*r*t)/100
#include<iostream>
using namespace std;

int main(){
    cout << "Enter principal amount: ";
    int p;
    cin >> p;

    cout << "Enter rate of interest: ";
    int r;
    cin >> r;

    cout << "Enter time period: ";
    int t;
    cin >> t;

    int i = (p*r*t)/100;
    cout << "SI is: " << i << endl;
}