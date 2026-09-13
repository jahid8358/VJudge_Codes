#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long positive = 0;
    long long negative = 0;

    vector<int> a(n * n);
    for (int i = 0; i < (n * n); i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    if (n % 2 == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            positive += a[(n * n) - 1 - i];
            negative += a[i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            positive += a[(n * n) - 1 - i];
            negative += a[i];
        }
    }
    cout << positive - negative << "\n";
    return 0;
}