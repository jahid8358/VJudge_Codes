#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int note[6] = {500, 100, 50, 10, 5, 1};
    int i = 0;
    vector<int> v;

    while (n > 0)
    {
        bool flag = false;
        int num = 0;

        if (note[i] <= n)
        {
            num = n / note[i];
            n = n % note[i];
            flag = true;
        }
        if (flag == true)
        {
            for (int j = 1; j <= num; j++)
                v.push_back(note[i]);
        }
        i++;
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < v.size(); j++)
        cout << v[j] << " ";
    cout << "\n";

    return 0;
}