// 43. Calculate the difference between two numbers and print the result. If the result is negative, convert it to positive using math. 

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int diff = a - b;
    if(diff < 0){
        diff = -diff; 
    }
    cout << "The difference is: " << diff << endl;

    return 0;
}