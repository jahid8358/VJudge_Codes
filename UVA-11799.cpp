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
        int ans = -1;
        int i;
        for (i = 1; i <= n; i++)
        {
            int s;
            cin >> s;
            if (s > ans)
                ans = s;
        }
        cout << "Case " << x++ << ": " << ans << endl;
    }

    return 0;
}