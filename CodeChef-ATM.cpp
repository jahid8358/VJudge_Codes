#include<stdio.h>
int main(){
int x,y;
float z=0.5;
scanf("%d %d",&x, &y);
float a=y-(x+z);
if(x%5==0 && y>x)
printf("%.2f",a);
else
printf("%d",y);
return 0;
}
