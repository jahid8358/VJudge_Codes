#include <bits/stdc++.h>
using namespace std;

void bankai(int test)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            count++;
            i += 2;
        }
    }
    cout << "Case " << test << ": " << count << "\n";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        bankai(i);

    return 0;
}