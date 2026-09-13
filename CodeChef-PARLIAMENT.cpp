#include<stdio.h>
int main(){
int t;
scanf("%d",&t);

int n,x;

for(int i=0; i<t ;i++){
scanf("%d %d",&n,&x);
int nv=n-x;
if(x>=nv)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}