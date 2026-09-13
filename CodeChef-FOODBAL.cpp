#include<stdio.h>
#include<math.h>
int main(){
int f1,p1,f2,p2;

scanf("%d %d %d %d",&f1,&p1,&f2,&p2);
int  fd=f1-p1;
int sd=f2-p2;

if(abs(fd)<abs(sd))
 printf("first\n");
else if(abs(fd)>abs(sd))
   printf("second\n");
else
    printf("both\n");
return 0;
}
