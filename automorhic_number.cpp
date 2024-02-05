// Program to check whether a number is automorphic or not
// An automorphic number is a number whose square ends with the number itself.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;

    int square = n * n;          // square of the number

    int digit = square % 10;     // last digit of the square

    if (digit == n % 10)         // comparing last digit of the square with last digit of the number
    {
        cout << n << " is Automorphic number";
    }
    else
    {
        cout << n << " is not Automorhic number";
    }
}