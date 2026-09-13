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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int v = a[0];
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > v)
            {
                v = a[i];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}