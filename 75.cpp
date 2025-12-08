// 75. Take 8 numbers as input and print them in descending order.  


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[8];

//     cout << "Enter 8 numbers:\n";
//     for (int i = 0; i < 8; i++) {
//         cin >> arr[i];
//     }

//     // Sorting in descending order using nested loops (Bubble Sort)
//     for (int i = 0; i < 7; i++) {
//         for (int j = 0; j < 7 - i; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 // Swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Numbers in descending order:\n";
//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
