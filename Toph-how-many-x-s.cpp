#include<stdio.h>
int main(){

char str[101];
scanf("%s",str);
int count=0;

for(int i=0; i<strlen(str);i++)
{
    if(str[i]=='X')
        count++;
}
printf("%d\n",count);

return 0;
}
