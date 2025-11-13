// 44. Calculate the average of 5 numbers entered by the user and print the result.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b,c,d,e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;
    
    int sum = a + b + c + d + e;

    int average = sum / 5;
    cout << "The average is: " << average << endl;

    return 0;
}