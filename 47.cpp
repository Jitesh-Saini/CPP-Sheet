// 47. Take an input from the user and check whether it is even or odd, then print the result. 


#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "The number is even." << endl;
    }
    else{
        cout << "The number is odd." << endl;
    }

    return 0;
}
