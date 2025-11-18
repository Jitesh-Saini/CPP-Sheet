// // 52. Take a sentence as input and print each word on a new line.  

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string sentence;
//     cout << "Enter a sentence: ";
//     getline(cin, sentence);

//     for (int i = 0; i < sentence.length(); i++) {
//         if (sentence[i] == ' ') {
//             cout << endl;
//         } else {
//             cout << sentence[i];
//         }
//     }

//     // for (char x : sentence) {
//     //     if (x == ' ') {
//     //         cout << endl;
//     //     } else {
//     //         cout << x;
//     //     }
//     // }
//     return 0;
// }


//print in reverse order
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string word = "";

    // Pehle last word find karne ke liye pura loop chalao
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            cout << word << " ";
            word = "";
        } else {
            word = sentence[i] + word;
        }
    }

    // Last word print
    cout << word;

    return 0;
}
