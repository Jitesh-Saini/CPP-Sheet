// 45. Swap the values of two integers and print them.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    // Swapping values
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "First integer: " << a << endl;
    cout << "Second integer: " << b << endl;

    return 0;
}