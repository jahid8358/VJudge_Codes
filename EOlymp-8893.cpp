#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
if(n%3==0 && n%2==0 && ((n>9 && n<100) || (n<-9 && n>-100)))
   cout<<"YES"<<endl;
else
   cout<<"NO"<<endl;
return 0;
}
