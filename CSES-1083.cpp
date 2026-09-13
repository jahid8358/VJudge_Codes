#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    int d = 0;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        total += a[i];
        d += (i + 1);
    }
    d += i + 1;
    cout << d - total << endl;
    return 0;
}