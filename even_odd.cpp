// Program to check whether the number is even or odd

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    if (num % 2 == 0)              // checking the remainder when the number is divided by 2
    {
        cout << num << " is Even number";
    }
    else if (num % 2 == 1)        // checking the remainder when the number is divided by 2
    {
        cout << num << " is odd number";
    }
    else
    {
        cout << "The number is zero or less than zero/negative";
    }

    return 0;
}