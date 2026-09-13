#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            if (i == (n - 1))
                cout << a[i];
            else
                cout << a[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}