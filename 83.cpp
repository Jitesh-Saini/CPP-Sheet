// 83. Take 5 numbers as input and print the largest one.

#include <iostream>
using namespace std;

int main()
{
    int num, largest;

    cout << "Enter 5 numbers:\n";

    cin >> largest;

    for (int i = 1; i < 5; i++)
    {
        cin >> num;
        if (num > largest)
        {
            largest = num;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
