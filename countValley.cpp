// Program to count the number of valleys in a given string
// A valley is a sequence of consecutive steps below sea level
// The string contains only two characters 'U' and 'D'
// 'U' means a step up and 'D' means a step down
// The string represents a sequence of steps
// The Program should print the count of valleys in the string

#include <bits/stdc++.h>
using namespace std;

int countValleys(string s)
{
    int count = 0;
    int level = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
        {
            level++;
        }
        else if (s[i] == 'D')
        {
            level--;
        }
        if (level == 0 && s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "UDDDUDUU";
    cout << countValleys(s) << endl;
    return 0;
}

