// 28. Print "I have completed __ from __" where the degree and ins tu on are entered by the user.  

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string deg, inst;
    cout << "Enter your degree: ";
    cin >> deg;
    cout << "Enter your institution: ";
    cin >> inst;

    cout << "I have completed " << deg << " from " << inst << endl;

    return 0;
}