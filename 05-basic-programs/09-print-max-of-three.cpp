// Print maximum of three numbers
#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    int max = num1;

    if(num2 > max){
        max = num2;
    }
    if(num3 > max){
        max = num3;
    }

    cout << "The maximum is " << max;
    return max;
}