#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, p, k;
        cin >> w >> p >> k;

        if (k <= w)
            cout << k * 2 << endl;

        else
            cout << (w * 2) + (k - w) << endl;
    }

    return 0;
}