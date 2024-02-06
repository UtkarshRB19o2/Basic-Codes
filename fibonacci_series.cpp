//Program to print the fibonacci series upto n terms

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
    int a = 0, b = 1;
    cout << a << ", " << b << ", ";  // Here we are printing 0th and 1st terms

    int nextTerm;

    for (int i = 2; i < num; i++)
    {                                // printing the rest of the terms here
        nextTerm = a + b;            // finding the next term
        a = b;                       // updating the value of a
        b = nextTerm;                // updating the value of b

        cout << nextTerm << ", ";
    }
    return 0;
}
