// 51. Take 3 float inputs and print their product.  

#include <iostream>
using namespace std;    
int main() {
    float a, b, c;
    cout << "Enter three float numbers: ";
    cin >> a >> b >> c;
    float prod = a * b * c;
    cout << "The product is: " << prod << endl;
    return 0;
}