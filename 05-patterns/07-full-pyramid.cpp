#include<iostream>
using namespace std;

int main(){
    cout << "Enter length: ";
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        // Printing spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        // Printing stars
        for(int j=0; j<i+1; j++){
            cout << "*   ";
        }

        cout << endl;
    }
}