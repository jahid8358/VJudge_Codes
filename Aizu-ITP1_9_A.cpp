#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    cin >> w;
    int count = 0;

    bool flag = true;
    while (flag)
    {
        string s;
        cin >> s;
        if (s == "END_OF_TEXT")
            break;

        if (s == w)
            count++;
    }

    cout << count << endl;

    return 0;
}