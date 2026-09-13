#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
for(int i=0; i<t; i++){
    int x,y;
    scanf("%d %d",&x,&y);

    if(y<=x)
    printf("%d\n",y);
    else{
    int z=x+2*(y-x);
    printf("%d\n",z);
}
}
return 0;
}