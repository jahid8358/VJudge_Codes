#include <stdio.h>
#include<string.h>
int main(){

int a,count=0;
scanf("%d",&a);

char str[51];
scanf("%s",str);

for(int i=0; i<a-1; i++)
{
    if(str[i]==str[i+1]) count++;
}

printf("%d\n",count);

    return 0;
}