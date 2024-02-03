// Program to find the factorial of a number using recursion

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)        // Base case
    {
        return 1;                // Factorial of 0 and 1 is 1
    }
    else
    {
        return n * fact(n - 1);  // Recursive call 
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int ans = fact(num);         // Function call
    cout << "The factorial is: " << ans;

    return 0;
}