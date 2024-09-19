// Print from 1 to n numbers
#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << i + 1 << endl;
    }
}