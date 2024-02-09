// Program to find the LCF of two numbers.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    int LCF = 1;

    for (int i = max(num1, num2); i <= num1 * num2; i++) // loop to iterate through all numbers from max(num1,num2) to num1*num2
    {
        if (i % num1 == 0 && i % num2 == 0)              // checking whether i is a multiple of both num1 and num2
        {
            LCF = i;                                     // updating LCF to the current number
            break;                                       // breaking the loop as we have found the LCF
        }
    }
    cout << "LCF of " << num1 << " and " << num2 << " is " << LCF;
    return 0;
}