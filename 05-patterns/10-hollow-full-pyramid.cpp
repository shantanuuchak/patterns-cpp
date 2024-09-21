// TODO: Pending State
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter length: ";
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Empty pyramid
        for (int i = 0; i < n - row - 1; i++)
        {
            cout << " ";
        }
        // Star pyramid
        // Empty pyramid

        cout << endl;
    }
}