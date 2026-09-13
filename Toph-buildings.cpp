#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll i;
    ll index;

    for (i = 1; i < n; i++)
    {
        ll value = 0;

        for (ll j = 0; j < n - 1; j++)
        {
            value += a[i] - a[j];
        }
        if (value == k)
        {
            index = i;
            break;
        }
        else if (value > k)
        {
            index = i - 1;
            break;
        }
    }

    if (n == 1)
        cout << k + a[0];
    else
        cout << a[index] << "\n";

    return 0;
}