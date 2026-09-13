#include <iostream>
#include<map>
using namespace std;

int main() {
  int n;
  cin>>n;
  map<string,int> mp;
  int x,y;
  string name;
    while(n--)
    { cin>>x >>name;
    
    if(x==1)
       {cin>>y;
       mp[name]+=y;
       }
    else if(x==2) 
      mp.erase(name);
    else
    cout <<mp[name]<< endl;
    }  
    
    return 0;
}