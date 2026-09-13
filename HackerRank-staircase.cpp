#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int j;
for(int i=1;i<=n;i++)
{
    for( j=1;j<=n-i;j++)
    {
        printf(" ");
    }
        for(int k=1;k<=n-j+1;k++)
    {
        printf("#");
    }
    printf("\n");
    
}

    return 0;
}