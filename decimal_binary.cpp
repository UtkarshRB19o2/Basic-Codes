// Program to convert decimal number to binary number

#include <iostream>
using namespace std;
int main()
{
    long long dec_num;
    cout << "Enter decimal number: ";
    cin >> dec_num;
    long long binary = 0, i = 1;
    while (dec_num != 0)
    {
        int rem = dec_num % 2;         // finding the remainder
        dec_num = dec_num / 2;         // updating the value of decimal number
        binary = binary + rem * i;     // adding the remainder to the binary number
        i = i * 10;                    // updating the power of 10
    }
    cout << "Binary Number is: " << binary;
}