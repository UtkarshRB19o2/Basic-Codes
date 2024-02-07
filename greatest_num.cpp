// Program to find the greatest number among two numbers using max function.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << max(a, b) << " is greater number.";     // max function returns the greater number

    return 0;
}
