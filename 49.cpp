// 49. Take two string inputs from the user and swap them, then print the results.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Swapping strings
    string temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "After swapping:" << endl;
    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    return 0;
}