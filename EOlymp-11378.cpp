#include<iostream>
using namespace std;
int main()
{
  int a,b,c,x,y,z;
  cin>>a>>b>>c;
  cin>>x>>y>>z;
  
int m=x/a;
int n=y/b;
int o=z/c;
int min;

if(m<n && m<o)
cout <<m<< endl;
else if(n<m && n<o)
cout<<n<<endl;
else
cout<<o<<endl;
 return 0;
}