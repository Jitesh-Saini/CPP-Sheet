// 90. Print the sum of two user-entered numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "Sum = " << sum << endl;

    return 0;
}
