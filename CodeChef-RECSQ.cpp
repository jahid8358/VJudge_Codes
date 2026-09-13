#include<stdio.h>
int main(){

int x,y,z;
scanf("%d %d %d",&x,&y,&z);

int a=x*y;
int b=z*z;
if(a==b)
    printf("yes\n");
else
    printf("no\n");

return 0;
}
