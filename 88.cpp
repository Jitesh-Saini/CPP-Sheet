// 88. Take an integer input and check whether it's divisible by 4 but not 8, then print the result.  

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 4 == 0 && num % 8 != 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
