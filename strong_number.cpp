// Program to check whether a number is strong number or not
// Strong number is a number in which the sum of the factorial of the digits is equal to the number itself.

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * fact(n - 1);          // recursive call to fact function
    }
}

int strong(int n)
{
    int digit, sum = 0;
    int temp = n;

    while (temp != 0)
    {
        digit = temp % 10;               // extract last digit
        sum = sum + fact(digit);         // calculate factorial of digit and add to sum
        temp /= 10;                      // remove last digit
    } 
    return sum == n;                     // return true if sum is equal to n
}
int main()
{
    int num = 145;

    if (strong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";
}