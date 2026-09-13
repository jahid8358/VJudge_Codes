#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 1;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int min = 500;
        int max = -5564;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
        }
        int ans = (max - min) * 2;
        cout << ans << endl;
    }

    return 0;
}