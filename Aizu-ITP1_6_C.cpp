#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1[3][10] = {0};
    int a2[3][10] = {0};
    int a3[3][10] = {0};
    int a4[3][10] = {0};

    while (n--)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;

        if (b == 1)
            a1[f - 1][r - 1] += v;
        else if (b == 2)
            a2[f - 1][r - 1] += v;
        else if (b == 3)
            a3[f - 1][r - 1] += v;
        else
            a4[f - 1][r - 1] += v;
    }
    // building 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << " " << a1[i][j];

        cout << endl;
    }
    cout << "####################\n";
    // building 2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << " " << a2[i][j];

        cout << endl;
    }
    cout << "####################\n";
    // building 3

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << " " << a3[i][j];

        cout << endl;
    }
    cout << "####################\n";
    // last
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << " " << a4[i][j];

        cout << endl;
    }
    return 0;
}