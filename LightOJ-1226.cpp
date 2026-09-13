#include <bits/stdc++.h>
using namespace std;
long long facto(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * facto(n - 1);
}
int main()
{
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }

        long long ans = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            int up = facto(total - 1);
            int low = facto(v[i] - 1) * facto(total - v[i]);
            ans = ans * (up / low);
            total -= v[i];
        }
        cout << "Case " << z << ": " << ans << "\n";
    }
}