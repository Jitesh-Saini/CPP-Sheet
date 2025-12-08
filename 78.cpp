// 78. Take an integer input and check if it is even, odd, or zero.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n == 0)
    {
        cout << "The number is zero." << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    return 0;
}
