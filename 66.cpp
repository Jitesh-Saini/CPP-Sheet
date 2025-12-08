// 66. Take 4 float inputs and print their average.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Enter 4 float numbers:\n";
    cin >> a >> b >> c >> d;

    float average = (a + b + c + d) / 4;

    cout << "Average = " << average << endl;

    return 0;
}
