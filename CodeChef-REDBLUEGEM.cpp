#include<stdio.h>
int main(){

int r,b,rp,bp;
scanf("%d %d %d %d",&r,&b,&rp,&bp);

int x=r*rp;
int y=b*bp;
if(x>y)
printf("%d",x);
else
printf("%d",y);

return 0;
}


