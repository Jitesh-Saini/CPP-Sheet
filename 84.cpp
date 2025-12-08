// 84. Take 6 numbers as input and print the sum of odd numbers.  


#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter 6 numbers:\n";

    for (int i = 0; i < 6; i++) {
        cin >> num;

        if (num % 2 != 0) {
            sum += num;
        }
    }

    cout << "Sum of odd numbers = " << sum << endl;

    return 0;
}
