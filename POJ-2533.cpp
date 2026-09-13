#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int val[n], lis[n], path[n];

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        lis[i] = 1;
        path[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (val[i] > val[j])
            {
                int v = 1 + lis[j];
                if (v > lis[i])
                {
                    lis[i] = v;
                    path[i] = j;
                }
            }
        }
    }

    int length = lis[0], ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (lis[i] > length)
        {
            length = lis[i];
            ind = i;
        }
    }
    cout << length << "\n";
    return 0;
}