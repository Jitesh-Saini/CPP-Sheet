// 87. Take a string input and count the number of vowels in it.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }

    cout << "Number of vowels in the string: " << count << endl;
    return 0;
}
