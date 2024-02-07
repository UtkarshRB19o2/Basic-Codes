// Program to find the sum of all natural numbers between a to b using recursion include a & b.

#include <iostream>
using namespace std;
int calcSum(int a, int b)
{

    if (a > b)                    // Base condition
        return 0;
    return a + calcSum(a + 1, b); // Recursive call
}
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int sum = calcSum(a, b);      // Function call
    cout << sum;
    return 0;
}