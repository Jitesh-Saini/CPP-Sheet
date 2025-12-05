// 74. Take a string input and check if it contains any vowels.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "The string contains a vowel." << endl;
        }
        else
            cout << "The string does not contain any vowels." << endl;
    }

    return 0;
}
