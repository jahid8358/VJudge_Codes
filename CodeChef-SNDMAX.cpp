#include<stdio.h>
int main(){
int t;
scanf("%d",&t);

int x,y,z;

for(int i=1; i<=t ; i++){
scanf("%d %d %d",&x,&y,&z);

if((x>y && x<z) || (x>z && x<y))
printf("%d\n",x);

else if((y<z && y>x) || (y<x && y>z))
printf("%d\n",y);

else
printf("%d\n",z);

}
    return 0;
}