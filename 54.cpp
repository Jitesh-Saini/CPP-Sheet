// 54. Take an integer input and check if it is divisible by 3 and 5, then print "Yes" or "No".  

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}