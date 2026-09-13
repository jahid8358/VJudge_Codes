#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % k == 0)
            ans++;
    }
    cout << ans << "\n";
    return 0;
}