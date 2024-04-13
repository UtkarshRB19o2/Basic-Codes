// Program to check if a number is a power of 2


// #include <iostream>
// #include <cmath>

// using namespace std;

// bool isPowerOfTwo(int n)
// {
//     return (n && !(n & (n - 1)));
// }

// int main()
// {
//     int input;

//     // Get input for the number
//     cout << "Enter a number: ";
//     cin >> input;

//     cout << input << " is " << (isPowerOfTwo(input) ? "" : "not ") << "a power of 2" << endl;

//     return 0;
// }

// Another approach to check if a number is a power of 2

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)    // 0 is not a power of 2
        return false;

    while (n != 1) 
    {
        if (n % 2 != 0)   // If n is not divisible by 2, then it is not a power of 2
            return false; 
        n = n / 2;        // Divide n by 2
    }
    return true;
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
