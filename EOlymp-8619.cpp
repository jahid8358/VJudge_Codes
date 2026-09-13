#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
int b ,a=n%10;
n=n/10;
for(int i=0;i<=4; i++)
{
    b=n%10;
    if(a<=b)
        {cout<<"NO"<<endl;
         return 0;}
    else
 a=b;
    n=n/10;
}
cout<<"YES"<<endl;
return 0;
}
