#include<stdio.h>
int main(){
int n,s,c,d;

int t;
scanf("%d",&t);
for(int i=1; i<=t; i++){
   scanf(" %d %d %d %d",&n,&s,&c,&d);
if(n>=s)
 s+=c;
else
    n+=c;

    if(n>=s)
       s+=d;
    else
        n+=d;
    if(n>=s)
    printf("n\n");
    else
    printf("s\n");
}


return 0;
}
