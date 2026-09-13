#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    while (t == 1)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            return 0;
        for (int i = 1; i <= m; i++)
            cout << "#";
        cout << endl;

        for (int i = 1; i <= n - 2; i++)
        {
            cout << "#";

            for (int j = 1; j <= m - 2; j++)
                cout << ".";

            cout << "#\n";
        }
        for (int i = 1; i <= m; i++)
            cout << "#";
        cout << endl;
        cout << endl;
    }
    return 0;
}