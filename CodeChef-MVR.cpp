#include<stdio.h>
int main(){
int a,b,x,y;
scanf(" %d %d %d %d",&a,&b,&x,&y);
int m=(2*a)+b;
int r=(2*x)+y;

if(m>r)
    printf("messi\n");
else if(r>m)
    printf("ronaldo\n");
    else
    printf("equal\n");
return 0;
}
