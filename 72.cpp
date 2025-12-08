// 72. Take two integers as input and check if the first is greater than the second, then print "True" or "False".

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    if (a > b)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
