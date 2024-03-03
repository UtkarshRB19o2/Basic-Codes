// Program to check if a number is a power of 2


#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    int input;

    // Get input for the number
    cout << "Enter a number: ";
    cin >> input;

    cout << input << " is " << (isPowerOfTwo(input) ? "" : "not ") << "a power of 2" << endl;

    return 0;
}