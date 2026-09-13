#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int total = n;
        while (n >= k)
        {
            int newc = n / k;
            total += newc;
            n = newc + (n % k);
        }
        cout << total << endl;
    }
    return 0;
}