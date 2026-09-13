#include<stdio.h>
int main(){

int n,a,b;
scanf("%d%d%d",&n,&a,&b);
int arr[n];
int sum=0;

for(int i=0; i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)
{
    if(i>=a && i<=b)
        sum=sum+arr[i];
}
printf("%d\n",sum);
return 0;
}

