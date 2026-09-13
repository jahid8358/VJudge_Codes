#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string A, B;
        cin >> A;
        cin >> B;

        int len = min(A.length(), B.length());

        for (int i = 0; i < len; i++)
        {
            if (A[i] == B[i])
                cout << A[i];
            else
                break;
        }
        cout << endl;
    }

    return 0;
}