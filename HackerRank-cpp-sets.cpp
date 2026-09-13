#include <iostream>
#include<set>
using namespace std;

int main() {
  int n;
  cin>>n;
  set<int>s;
  int x,y;
    while(n--)
    { cin >>x>>y;
    
    if(x==1)
     s.insert(y);
    else if(x==2) 
      s.erase(y);
    else
    {  if(s.find(y)==s.end())
          cout << "No" << endl;
       else
         cout << "Yes" << endl;   
    }
    }  
    
    return 0;
}