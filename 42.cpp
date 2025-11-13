// 42. Calculate and print the sum of two numbers entered by the user.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;
    cout << "The sum is: " << sum << endl;

    return 0;
}