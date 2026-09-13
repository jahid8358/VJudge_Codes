#include<stdio.h>
int main(){
int t;
scanf("%d",&t);

int y,x;

for(int i=0; i<t ;i++){
scanf("%d %d",&x,&y);

if(y>x)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
