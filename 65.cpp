// 65. Take 5 string inputs and print them joined by spaces.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3, s4, s5;

    cout << "Enter 5 strings:\n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << endl;

    return 0;
}
