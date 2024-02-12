// Program to find factors of a number

#include <iostream>
using namespace std;

void factors(int num)
{
    for (int i = 1; i <= num; i++)   // loop to find factors of a number
    {
        if (num % i == 0)            // condition to check if the number is a factor
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    factors(num);
}