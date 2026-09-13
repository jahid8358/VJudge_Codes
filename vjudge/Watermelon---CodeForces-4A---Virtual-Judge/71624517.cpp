// Problem: problem
// Platform: vjudge
// Contest: Watermelon - CodeForces 4A - Virtual Judge
// Language: GNU G++23 14.2 (64 bit, msys2)
// Verdict: Accepted
// URL: https://vjudge.net/problem/CodeForces-4A
// Solved on: 2026-09-13T06:28:15.813Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 2 == 0 && n > 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}