// Program to count the number of squares upto n excluding n
// Optimized version

#include <iostream>
#include <cmath>

using namespace std;

int countSquares(int n)
{
    return (int)sqrt(n) - 1;
}

int main()
{
    int input;

    // Get input for the number
    cout << "Enter a number: ";
    cin >> input;

    cout << "Number of squares upto " << input << " excluding " << input << " is " << countSquares(input) << endl;

    return 0;
}
