#include<stdio.h>
int main(){

int a,b,c,x,y;
scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);

int m,n;
if(a<=b && a<=c)
    {m=a;
      if(b<c)
        n=b;
      else
        n=c;
   }

else if(b<=a && b<=c)
    {m=b;
      if(a<c)
        n=a;
      else
        n=c;
   }
else
{
    m=c;
       if(a<b)
        n=a;
      else
        n=b; 
}

if((m<=x && n<=y) || (m<=y && n<=x))
     printf("YES\n");
     else
     printf("NO\n"); 

return 0;
}