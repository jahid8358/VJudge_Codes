#include<stdio.h>
int main(){
int x,y;
scanf("%d %d",&x,&y);
int z=x+y;
if(z<2000)
    printf("no\n");
else
    printf("yes\n");
return 0;
}
