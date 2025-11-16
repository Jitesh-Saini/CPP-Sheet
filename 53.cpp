// 53. Take a single character as input and print its Ascii value.  

#include <iostream>
using namespace std;    
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "The Ascii value of " << ch << " is: " << int(ch) << endl;
    return 0;
}
