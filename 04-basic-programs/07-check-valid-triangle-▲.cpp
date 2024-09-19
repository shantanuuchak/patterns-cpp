// Check if given number is a valid triangle
#include<iostream>
using namespace std;

int main(){
    int side1;
    int side2;
    int side3;

    cout << "Enter first side: ";
    cin >> side1;

    cout << "Enter second side: ";
    cin >> side2;

    cout << "Enter third side: ";
    cin >> side3;

    bool isValid = true;
    if(side1 + side2 <= side3){
        isValid = false;
    }
    if (side2 + side3 <= side1){
        isValid = false;
    }
    if(side3 + side1 <= side2){
        isValid = false;
    }

    if(isValid){
        cout << "This is a valid triangle ▲" << endl;
    } else {
        cout << "Not a valid triangle ▲" << endl;
    }
}