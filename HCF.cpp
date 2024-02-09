// Program to find HCF of two numbers
// HCF (Highest Common Factor) of two numbers is the largest number that divides both of them

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    int HCF = 1;

    for (int i = 1; i <= num1 || i <= num2; i++)    // loop to iterate through all numbers from 1 to num1 and num2

    {
        if (num1 % i == 0 && num2 % i == 0)         // checking whether i is a factor of both num1 and num2
        {
            HCF = i;                                // updating HCF to the current number
        }
    }
    cout << "HCF of " << num1 << " and " << num2 << " is " << HCF;
    return 0;
}