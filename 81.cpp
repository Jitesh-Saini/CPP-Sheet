// 81. Take a string and an integer input, then print the string repeated that many times.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter the number to repeat: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << str;
    }
    cout << endl;

    return 0;
}
