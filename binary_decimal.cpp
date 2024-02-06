// Program to convert binary number to decimal number

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long bi_num;
    cout << "Enter binary number: ";
    cin >> bi_num;
    int i = 0, decimal = 0;

    while (bi_num != 0)
    {
        int digit = bi_num % 10;               // extracting the last digit of the binary number
        decimal = decimal + digit * pow(2, i); // multiplying the last digit with 2 raised to the power i and adding it to the decimal number
        bi_num = bi_num / 10;                  // removing the last digit from the binary number
        i++;                                   // incrementing the power of 2
    }

    cout << "decimal Number is: " << decimal;
}