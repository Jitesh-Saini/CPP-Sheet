// 77. Take 4 float numbers as input and print their product.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Enter 4 float numbers:\n";
    cin >> a >> b >> c >> d;

    float product = a * b * c * d;

    cout << "Product = " << product << endl;

    return 0;
}
