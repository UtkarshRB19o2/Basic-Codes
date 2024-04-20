// Program to check if a given mobile number is valid or not
// A valid mobile number is a ten digit number 
// not containing any alphabets or special characters
// Only digits are allowed
// An Array containing the five mobile numbers is given
// The Program should print the count of valid mobile numbers

#include <bits/stdc++.h>
using namespace std;

bool isValidMobileNumber(string s)
{
    if (s.length() != 10)
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string mobileNumbers[] = {"1234567890", "123456789a", "123456789", "1234A67890", "1234567890"};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (isValidMobileNumber(mobileNumbers[i]))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

