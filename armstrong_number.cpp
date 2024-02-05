// Program To check whether the given number is armstrong number or not.

#include <iostream>
using namespace std;
int main()
{
    int num, arm_no, sum = 0;
    cout << "Enter the Number: ";
    cin >> num;
    int temp = num;

    while (temp != 0)
    {
        int b = temp % 10;              // Extracting the last digit of the number

        sum = sum + (b * b * b);        // Cubing the last digit and adding it to the sum
        temp = temp / 10;               // Removing the last digit from the number
    }
    if (num == sum)                     // Checking whether the sum of cubes of digits is equal to the original number
    {
        cout << num << " is armstrong Number ";
    }
    else
    {
        cout << num << " is not armstrong Number ";
    }
    return 0;
}
