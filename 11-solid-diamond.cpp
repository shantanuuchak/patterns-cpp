#include <iostream>
using namespace std;

int main()
{
    cout << "Enter length: ";
    int n;
    cin >> n;

    // Printing first pyramid
    for (int i = 0; i < n; i++)
    {
        // Printing spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        // Printing stars
        cout << endl;
    }
    // Printing second pyramid
    for (int i = 0; i < n; i++)
    {
        // Printing stars
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Printing spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}