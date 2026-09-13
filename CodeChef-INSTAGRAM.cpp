#include<stdio.h>
int main(){

int t;
scanf("%d",&t);

int x,y;
for(int i=1; i<=t; i++){
scanf("%d  %d",&x,&y);

if(10*y>x)
    printf("yes\n");
else
    printf("no\n");
}
return 0;
}
