#include<stdio.h>
int main(){

int d,h;
scanf("%d %d",&d,&h);
int day=d-4;
int th=day*24;
int gg=th+h;
printf("%d",gg);
return 0;
}