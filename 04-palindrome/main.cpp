#include<iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a value: ";
    string userInput;
    cin >> userInput;
    int stringLen = userInput.length();

    // Reversed
    string reversed = "";
    for(int i=stringLen-1; i>=0; i--){
        reversed += userInput.at(i);
    }

    if(userInput == reversed){
        cout << "The input string is a palindrome" << endl;
    } else {
        cout << "The input string is not a palindrome" << endl;
    }
}