#include <stdio.h>

int convert(int n)
{
    int an = 0;
    int base = 1;

    while (n > 0)
    {
        an = an+ (n % 10) * base;
        base *= 2;
        n /= 10;
    }
    return an;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int z = 1; z <= t; z++)
    {
        int a, b, c, d;
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);

        int e, f, g, h;
        scanf("%d.%d.%d.%d", &e, &f, &g, &h);

        int a1 = convert(e);
        int a2 = convert(f);
        int a3 = convert(g);
        int a4 = convert(h);

        if (a1 == a && a2 == b && a3 == c && a4 == d)
            printf("Case %d: Yes\n", z);
        else
            printf("Case %d: No\n", z);
    }
    return 0;
}