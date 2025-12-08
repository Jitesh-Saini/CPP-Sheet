// 69. Take an integer input and check if it's divisible by 7 or 11, then print "Yes" or "No".



#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an number: ";
    cin >> n;

    if (n % 7 == 0 || n % 11 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
