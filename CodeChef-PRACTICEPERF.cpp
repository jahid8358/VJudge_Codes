#include<stdio.h>
int main(){
int a,b,c,d;
scanf(" %d %d %d %d",&a,&b,&c,&d);


int count=0;

if(a>9) count+=1;
if(b>9) count+=1;
if(c>9) count+=1;
if(d>9) count+=1;
printf("%d",count);

return 0;
}
