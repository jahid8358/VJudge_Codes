#include<stdio.h>
int main(){
long long x,y;

int t;
scanf("%d",&t);
for(int i=1; i<=t; i++){
scanf("%lld %lld",&x,&y);
long long l=((x*x*x*x)+(4*y*y));
long long r=4*x*x*y;

if(l==r)
    printf("yes\n");
else
    printf("no\n");
}

return 0;
}
