// Program to check whether a number is palindrome or not
// A number is said to be palindrome if it is equal to its reverse

#include <iostream>
using namespace std;
int main()
{
    int num, temp;
    cout << "Enter a number: ";
    cin >> num;
    int reverse = 0;
    temp = num;

    while (temp != 0)
    {
        int rem = temp % 10;            // Extracting the last digit of the number
        reverse = reverse * 10 + rem;   // Adding the last digit to the reverse number
        temp = temp / 10;               // Removing the last digit from the number
    }

    if (num == reverse)                 // Comparing the original number with the reverse number
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
