// 34. Print "I am __ years old and I enjoy __" where the age and favorite ac vity are entered by the user.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int age;
    string activity;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your favorite activity: ";
    cin >> activity;

    cout << "I am " << age << " years old and I enjoy " << activity << endl;

    return 0;
}