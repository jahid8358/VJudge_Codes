
#include<stdio.h>
int main(){

int n;
int k;
int ml;
int c,d;
int s,p;

int nl,np;

scanf("%d %d %d %d %d %d %d %d",&n,&k,&ml,&c,&d,&p,&nl,&np);

int tl=n*k;
int tfl=tl/3;

int td=c*d;
int tfc=td/3;

int tfp=p/np;
int tfpt=tfp/3;

if(tfl<tfc && tfl<tfpt)
printf("%d",tfl/2);

else if(tfc<tfl && tfc<tfpt)
printf("%d",tfc/2);

else
 printf("%d",tfpt);


return 0;
}
