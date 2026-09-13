#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float lp = a + (4 - (a + b + c));
    float op = c;
    if (lp > op)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}