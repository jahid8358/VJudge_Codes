#include<iostream>
using namespace std;
int main()
{
  int a,b,c,count =1;
  cin>>a>>b>>c;
 
 if(a!=b)
 count++;
 if(a!=c && b!=c)
 { count++;
 cout <<count<< endl;
 return 0; }
 cout <<count<< endl;
 return 0;
}