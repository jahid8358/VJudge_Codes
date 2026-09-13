#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int o = x / 2, tw = y / 2;
        long long total = 0;
        for (int i = 0; i < o; i++)
            total = (total * 10) + 1;

        for (int i = 0; i < tw; i++)
            total = (total * 10) + 2;

        long long ans = total;
        while (total > 0)
        {
            int s = total % 10;
            ans = (ans * 10) + s;
            total /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}