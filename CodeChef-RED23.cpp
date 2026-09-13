#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        while (flag)
        {
            if (n % 2 == 0 && n > 3)
            {
                int a = n / 2;
                int b = n - 3;
                if (a < b)
                    n /= 2;
                else
                    n -= 3;
            }
            else if (n % 2 == 0)
                n /= 2;
            else if (n > 3)
                n -= 3;
            else
                break;
        }
        cout << n << endl;
    }

    return 0;
}