// Program to count the number of digits in a number

#include <iostream>
using namespace std;
int countDigit(int n)
{

    int digit = 0;
    while (n != 0)         // Loop will run until the number becomes 0.

    {
        n = n / 10;        // Divide the number by 10 and store the quotient in n.
        digit = digit + 1; // Increment the count of digits.
    }
    return digit;
}
int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number of digits in the number is: " << countDigit(num);

    return 0;
}
