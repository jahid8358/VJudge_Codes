
#include<stdio.h>
int main(){

int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int d,e,f;
d=a+b;
e=b+c;
f=a+c;
if(d>c && e>a && f>b)
printf("YES");
else
printf("NO");
return 0;
}
