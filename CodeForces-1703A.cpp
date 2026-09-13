#include<stdio.h>
#include<string.h>
int main(){

int t;
scanf("%d",&t);

for(int i=1; i<=t; i++){

char arr[1000];
scanf("%s",&arr);

if((arr[0]=='y' || arr[0]=='Y') && (arr[1]=='e' || arr[1]=='E') && (arr[2]=='s' || arr[2]=='S'))
{printf("yes\n");
}
else
    printf("no\n");
    }
return 0;
}
