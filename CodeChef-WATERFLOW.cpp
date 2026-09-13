#include <stdio.h>

int main() {
   int w,x,y,z;
int t;
scanf("%d",&t);
for(int i=1; i<=t; i++){
   scanf("%d %d %d %d",&w,&x,&y,&z);
    int tw=w+(y*z);
if(tw>x)
printf("overflow\n");
else if(tw<x)
printf("unfilled\n");
else
printf("filled\n");
}
    return 0;
}
