#include<iostream>
using namespace std;

int main(){
    cout << "Enter a value: ";
    string userInput;
    cin >> userInput;
    int stringLen = userInput.length();

    // strings always in double quotes
    string a = "a";
    a += "b";
    cout << a;
}