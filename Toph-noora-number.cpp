#include <bits/stdc++.h>
using namespace std;

long long maxdigit(long long n)
{
    int ans = -4857;
    while (n > 0)
    {
        if ((n % 10) > ans)
            ans = n % 10;

        n /= 10;
    }
    return ans;
}

long long distinct(long long n)
{
    bool flag = true;

    set<int> dis;
    while (n >= 0)
    {
        if (flag == false)
            n++;

        int x = n % 10;
        n /= 10;

        dis.insert(x);
        n--;
        flag = false;
    }
    return dis.size();
}
void solve()
{
    long long n;
    cin >> n;

    long long count = 0;

    for (long long i = 1; i <= n; i++)
    {
        if (distinct(i) == maxdigit(i))
            count++;
    }
    cout << count << "\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}