#include<iostream>
using namespace std;
int main(){
int s,x;
cin>>s>>x;
int count=0;
while(s>0){
    count++;
    s=s/x;
}
cout<<count<<endl;
return 0;}
