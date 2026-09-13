#include<stdio.h>
int main(){
int t;
scanf("%d",&t);

for(int i=1; i<=t ;i++){

char str[101];
scanf("%s",str);
int count=0;

for(int j=0; j<strlen(str); j++)
{
    if((str[j]>='0' && str[j]<='6') || str[j]=='O' || str[i]=='D' )
        count++;
}
if(count>6)
         printf("%d OVER %d BALL\n",(count/6),(count%6));
else if(count==6)
        printf("1 OVER\n");
else if(count==1)
    printf("1 BALL\n");
else if(count>1 && count<6)
    printf("%d BALLS\n",count);

}
return 0;
}
