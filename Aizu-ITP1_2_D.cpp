#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;

    int left = 0;
    int right = w;
    int up = h;
    int down = 0;

    int lc = x - r;
    int rc = x + r;
    int uc = y + r;
    int dc = y - r;
    if (lc < left || rc > right || uc > up || dc < down)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}