#include<stdio.h>
int main(){
 int solo,three,n;
 scanf("%d %d %d",&solo,&three,&n);

int t,price,ex;
if(three>solo*3)
    {
       price=solo*n;
       printf("%d\n",price);
    }

else
{  t=n/3;
   ex=n%3;
   price=(three*t)+(ex*solo);
   printf("%d\n",price);}

return 0;
}