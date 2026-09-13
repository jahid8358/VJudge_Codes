#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int last=n%10;
n=n/10;
int third=n%10;
n=n/10;
int second=n%10;
n=n/10;
int first=n%10;

if(first==last && second==third)
   cout<<"YES"<<endl;
else
   cout<<"NO"<<endl;

return 0;
}