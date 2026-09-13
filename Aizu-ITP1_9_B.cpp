#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    while (t == 1)
    {
        string s;
        cin >> s;
        if (s == "-")
            break;
        else
        {
            int n;
            cin >> n;
            while (n--)
            {
                int x;
                cin >> x;
                for (int j = 1; j <= x; j++)
                {
                    char temp = s[0];
                    for (int i = 0; i < s.length() - 1; i++)
                    {
                        s[i] = s[i + 1];
                    }
                    s[s.length() - 1] = temp;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}