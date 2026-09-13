/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,m,value;
    scanf("%d %d",&n,&m);
    if(n<m)
    value=(n*m)-n;
    else
    value=(n*m)-m;
    printf("%d\n",value);

    return 0;
}