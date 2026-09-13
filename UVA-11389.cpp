#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (t)
    {
        int n, d, r;
        cin >> n >> d >> r;
        if (n == 0 && d == 0 && r == 0)
            break;

        vector<int> m(n);
        vector<int> e(n);

        for (int i = 0; i < n; i++)
            cin >> m[i];
        for (int i = 0; i < n; i++)
            cin >> e[i];
        sort(m.begin(), m.end());
        sort(e.begin(), e.end());

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = m[i] + e[n - 1 - i];
            if (sum > d)
                total += (sum - d) * r;
        }

        cout << total << "\n";
    }

    return 0;
}