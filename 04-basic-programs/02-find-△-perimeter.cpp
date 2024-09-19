// Program to find perimeter of a triangle
#include<iostream>
using namespace std;

int main(){
    cout << "Enter first side: ";
    int side1;
    cin >> side1;
    cout << endl;

    cout << "Enter second side: ";
    int side2;
    cin >> side2;
    cout << endl;

    cout << "Enter third side: ";
    int side3;
    cin >> side3;
    cout << endl;

    int perimeter = side1 + side2 + side3;
    cout << "The perimeter is: " << perimeter;
} 