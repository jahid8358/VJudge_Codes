#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int initial = 'a';

    for (int i = 0; i < s.length(); i++)
    {
        int d = s[i] - initial;
        if (d < 0)
            d = d * -1;
        else if (d == 0)
            continue;

        if (d < (26 - d))
            count += d;
        else
            count += 26 - d;

        initial = s[i];
    }
    cout << count << endl;

    return 0;
}
