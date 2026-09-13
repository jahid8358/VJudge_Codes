#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    bool even = false;
    bool odd = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even = true;
        else
            odd = true;
    }

    if (odd == true && even == true)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}