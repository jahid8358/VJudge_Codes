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
        {
            cin >> a[i];
        }
        int ans = n;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > (a[n - 1] / 2))
                break;
            else
                ans--;
        }
        cout << ans << endl;
    }
    return 0;
}