// 73. Take an integer and a float as input, then print their sum.

#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter a float: ";
    cin >> b;

    float sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}
