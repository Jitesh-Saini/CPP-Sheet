// 59. Take a list of 5 numbers from the user and print them.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        cout << n << endl;
    }

    return 0;
}