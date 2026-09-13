#include<stdio.h>
#include<string.h>
int main(){
char s1[101],s2[101],s3[101];
scanf("%s",s1);
scanf("%s",s2);

if(strlen(s1)!=strlen(s2))
{printf("NO\n");
  return 0;}

int i=0,j=0;
int len=strlen(s1);
while(i<len)
{
 s3[i]=s1[len-1-i];
i++;
}
s3[len]='\0';

int flag=1;
while(j<len)
 {
   if(s2[j]!=s3[j])
   {flag=0;
   break;
   }j++;
 }
 
 if(flag==0)
 printf("NO\n");
 else
 printf("YES\n");
 
 return 0;
 }