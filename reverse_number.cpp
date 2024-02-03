// Program to reverse a number


#include <iostream>
using namespace std;
int main()
{
    int num;
    num = 1234;
    int reverse = 0;
    while (num != 0)                // loop until num is not 0 
    {
        int rem = num % 10;         // remainder
        reverse = reverse*10 + rem; // reverse number
        num = num / 10;             // quotient
    }

    cout<<reverse;
}
