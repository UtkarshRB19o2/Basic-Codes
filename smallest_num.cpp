// Program to find the smallest number among two numbers using max function.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << min(a, b) << " is smaller number.";     // min function returns the smallest number.

    return 0;
}
