// 61. Take an integer input and print whether it is a prime number.  

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}


