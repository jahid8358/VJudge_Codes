#include <stdio.h>
#include<string.h>

int main()
{
    char c[100];
    fgets(c,sizeof(c),stdin);
    
    printf("Hello, World.\n");
    printf("%s",c);

    return 0;
}