#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
                even += a[i];
            else
                odd += a[i];
        }
        if (even < odd)
            cout << odd << endl;
        else
            cout << even << endl;
    }
    return 0;
}