// Program to check if a number is a perfect square or not

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n)
{
    int root = sqrt(n);            // sqrt() returns the square root of a number
    return n == root * root;       
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
    {
        cout << "Perfect Square";
    }
    else
    {
        cout << "Not Perfect square";
    }

    return 0;
}

