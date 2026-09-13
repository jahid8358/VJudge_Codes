#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int m, l;
        cin >> m >> l;
        int total = 0;
        if (l >= m)
        {
            total += (l - m) * 4 + 19;
            total += m * 4;
        }
        else
        {
            total += (m - l) * 4;
            total += 19 + (m * 4);
        }
        cout << "Case " << i << ": " << total << endl;
    }
    return 0;
}
