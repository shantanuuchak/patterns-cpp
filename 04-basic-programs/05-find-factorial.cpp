// Program to find the factorial of a number
#include<iostream>
using namespace std;

int main(){
    cout << "Enter number to find factorial: ";
    int n;
    cin >> n;
    
    // Factorial
    int factorial = 1;
    for(int i=0; i<n; i++){
        factorial *= i+1;
    }
    cout << "Factorial is: " << factorial << endl;
    return factorial;
}