// 62. Take an input number and print whether it's a palindrome.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
