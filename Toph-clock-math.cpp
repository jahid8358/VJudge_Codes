#include <stdio.h>
int main(){
    int h,m;
    scanf("%d %d",&h,&m);
double ha,ma,ta;

    ha=(h%12)*30.0+m*0.5;
      ma=m*6.0;
    ta=ha-ma;
    if(ta<0)
        ta=-ta;

    if(ta>180.0)
        ta=360.0-ta;

printf("%.7lf\n",ta);


 return 0;
}
