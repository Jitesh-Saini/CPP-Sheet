// 31. Print "I am from __, and my favorite hobby is __" where the city and hobby are entered by the user. 

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string city, hobby;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your favorite hobby: ";
    cin >> hobby;

    cout << "I am from " << city << ", and my favorite hobby is " << hobby << endl;

    return 0;
}