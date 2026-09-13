#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int t,x,m;
for(int i=1; i<=n; i++){
scanf("%d %d %d",&t,&x,&m);
int s=x+m+t;
if(s==180)
printf("YES\n");
else
printf("NO\n");
}

return 0;
}

