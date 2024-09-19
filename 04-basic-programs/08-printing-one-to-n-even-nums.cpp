// Print one to n only even numbers
#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    for(int i=2; i<n;i+=2){
        cout << i << endl;
    }
}