#include<stdio.h>
int main(){

char arr[1000];
scanf("%s",&arr);

if(arr[0]>='a' && arr[0]<='z'){

    arr[0]=arr[0]-'a'+'A';
}
printf("%s",arr);

return 0;
}
