// 36. Print "I prefer __ over __" where two preferences are entered by the user.  


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string a, b;
    cout << "Enter your first preference: ";
    cin >> a;
    cout << "Enter your second preference: ";
    cin >> b;

    cout << "I prefer " << a << " over " << b << endl;

    return 0;
}