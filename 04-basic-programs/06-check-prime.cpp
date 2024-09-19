#include<iostream>
using namespace std;

int main(){
    cout << "Enter number to check for prime: ";
    int n;
    cin >> n;

    bool isPrime = true;

    for(int i=2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }   

    if(isPrime){
        cout << "Entered number IS prime!" << endl;
    } else {
        cout << "Entered number is NOT prime!" << endl;
    }

    cout << "Hello World";
}