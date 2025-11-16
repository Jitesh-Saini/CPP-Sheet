// 60. Take 6 integers as input and print the largest one.  

#include <iostream>
using namespace std;
int main() {
    int largest = 0; // Initialize to the smallest integer
    int num;

    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num > largest) {
            largest = num;
        }
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}