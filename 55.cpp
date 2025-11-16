// 55. Take 10 integers and print their sum.  

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int num;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}