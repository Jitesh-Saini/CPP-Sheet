// 80. Take 10 float inputs and print them.  


#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter 10 float numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
