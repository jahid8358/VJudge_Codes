#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
for(int i=1; i<=t; i++){
int x,y;
scanf("%d %d",&x,&y);

if(x<50 )
    printf("Z\n");
else if(x<50 || y<50)
    printf("F\n");
else
    printf("A\n");
}
return 0;
}
