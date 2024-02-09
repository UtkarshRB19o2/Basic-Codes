// Program to check whether a number is harshad number or not
// Harshad number is a number that is divisible by the sum of its digits

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int sum = 0;
    int temp = num;

    while (temp != 0)
    {
        int digit = temp % 10;      // extracting last digit of number
        sum = sum + digit;          // adding last digit to sum
        temp = temp / 10;           // removing last digit from number
    }

    if (num % sum == 0)             // checking whether number is divisible by sum of its digits
    {
        cout << num << " is harshad number";
    }
    else
    {
        cout << num << " is not harshad number";
    }

    return 0;
}