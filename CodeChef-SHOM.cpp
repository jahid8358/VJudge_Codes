#include<stdio.h>
int main(){

int l,r;
int k;
scanf("%d %d",&l,&r);
if(l>r){
k=l-r;
printf("%d",k);
}
else if(r>l){
 k=r-l;
printf("%d",k);}
else
 printf("%d",r-l);
return 0;
}