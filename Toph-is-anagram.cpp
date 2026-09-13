#include<stdio.h>
int main(){

char s1[101],s2[101];

scanf("%s",s1);
scanf("%s",s2);

int  st1[26]={0};
int st2[26]={0};
int flag=0;
if(strlen(s1)!=strlen(s2))
     printf("NO\n");
else{
   for(int i=0; i<strlen(s1);i++)
   {
     st1[s1[i]-'a']++;
     st2[s2[i]-'a']++;
   }
   for(int j=0; j<26; j++)
   {
       if(st1[j]==st2[j])
        continue;
       else{
        flag++;
       break;}
   }
   if(flag==1)
    printf("NO\n");
   else
    printf("YES\n");
}

return 0;}
