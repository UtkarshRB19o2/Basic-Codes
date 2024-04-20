// Bench Press code chef problem
// Problem link: https://www.codechef.com/problems/BENCHP


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, w, wr;  // n is the number of plates, w is the weight of the barbell, wr is the weight of the rod
        cin >> n >> w >> wr;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum + wr >= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}