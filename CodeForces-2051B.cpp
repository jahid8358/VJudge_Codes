#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

int t;
cin>>t;
while(t--)
  {  int n,a,b,c;
    cin >> n>>a>>b>>c;
    int abc=a+b+c;
    int ab=a+b;

    long long total=0;
     int count=0;

    while(total<n){
       if((total+a)>=n)
       {count++;
        break;}
        else if((total+ab)>=n)
        {count+=2;
        break;}
        else{
        total+=abc;
        count+=3;    
        }
    }
    cout<<count<<"\n";
}
    return 0;
}