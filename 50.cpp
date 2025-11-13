// 50. Take 5 integers as input and print the smallest among them.  

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c, d, e;
    cout << "Enter five integers: ";
    cin >> a >> b >> c >> d >> e;

    int smallest = a;

    if(b < smallest){
        smallest = b;
    }
    if(c < smallest){
        smallest = c;
    }
    if(d < smallest){
        smallest = d;
    }
    if(e < smallest){
        smallest = e;
    }

    cout << "The smallest integer is: " << smallest << endl;

    return 0;
}