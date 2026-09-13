#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int n;


for(int j=1; j<=t; j++){
scanf("%d",&n);
int f=1;
for(int i=n; i>0; i--){
f=f*i;
}
printf("%d\n",f);
}
return 0;
}

