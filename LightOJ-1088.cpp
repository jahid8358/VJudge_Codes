#include <bits/stdc++.h>
using namespace std;

long long big(vector<long long> &v, long long end)
{
    long long low = 0;
    long long high = v.size() - 1;
    long long count;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (v[mid] == end)
            return mid;
        else if (v[mid] < end)
        {
            count = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return count;
}

long long small(vector<long long> &v, long long start)
{
    long long low = 0;
    long long high = v.size() - 1;
    long long count;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (v[mid] == start)
            return mid;
        else if (v[mid] > start)
        {
            count = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        cout << "Case " << z << ":\n";

        for (long long i = 0; i < q; i++)
        {
            long long start, end;
            cin >> start >> end;

            long long bigger = big(v, end);
            long long smaller = small(v, start);
            cout << bigger - smaller + 1 << endl;
        }
    }
    return 0;
}