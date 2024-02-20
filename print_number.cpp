// Program to print the number in trems of unit place and tens place and hundreds place format

#include <iostream>
#include <cmath>

using namespace std;

void printPlaceValue(int number)
{
    int divisor = 1000;                     // Initial divisor for the thousands place

    while (divisor > 0)
    {
        int digit = number / divisor;

        if (digit > 0)
        {
            cout << digit * divisor;
            if (divisor > 1)
            {
                cout << ", ";
            }
        }

        number %= divisor;
        divisor /= 10;                       // Move to the next place value
    }

    cout << endl;
}

int main()
{
    int input;

    // Get input for the number
    cout << "Enter a number: ";
    cin >> input;

    cout << "Place values: ";
    printPlaceValue(input);

    return 0;
}
