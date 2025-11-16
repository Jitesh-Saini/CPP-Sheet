// 52. Take a sentence as input and print each word on a new line.  

#include <bits/stdc++.h>
using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    cin>>sentence;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            cout << endl;
        } else {
            cout << sentence[i];
        }
    }

    // for (char x : sentence) {
    //     if (x == ' ') {
    //         cout << endl;
    //     } else {
    //         cout << x;
    //     }
    // }
    return 0;
}