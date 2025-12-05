// 63. Take a number and print its factorial.

#include <iostream>
using namespace std;

int main()
{
    int num;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << num << " is " << fact << endl;

    return 0;
}
