// 67. Take an integer input and check if it is a perfect square.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    for (int i = 0; i * i <= num; i++)
    {
        if (i * i == num)
        {
            cout << num << " is a perfect square." << endl;
            return;
        }
    }
    cout << num << " is not a perfect square.";

    return 0;
}
