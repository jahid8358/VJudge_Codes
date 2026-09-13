#include <iostream>
using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
 int num=y/x;
 int bus=(n-1)/num;
 bus++;
 cout<<bus<<endl;
return 0;}