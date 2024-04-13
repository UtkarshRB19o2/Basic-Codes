// Program given number is prime or not

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     bool isPrime = true;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n == 0 || n == 1) {                   // 0 and 1 are not prime numbers
//         isPrime = false;
//     } else {
//         for (int i = 2; i <= n / 2; ++i) {    // check for factors
//             if (n % i == 0) {                 // if n is divisible by any number other than 1 and itself
//                 isPrime = false;            
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//         cout << "This is a prime number";
//     else
//         cout << "This is not a prime number";

//     return 0;
// }


// Program to find prime numbers between two intervals

#include <iostream>
using namespace std;

int main() {
    int low, high;
    bool isPrime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    for (int n = low; n <= high; ++n) {
        isPrime = true;
        if (n == 0 || n == 1) {                   // 0 and 1 are not prime numbers
            isPrime = false;
        } else {
            for (int i = 2; i <= n / 2; ++i) {    // check for factors
                if (n % i == 0) {                 // if n is divisible by any number other than 1 and itself
                    isPrime = false;            
                    break;
                }
            }
        }
        if (isPrime)
            cout << n << " ";
    }

    return 0;
}












