#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,x,y,d;
  cin>>n>>x>>y>>d;

  if(x==y){
    cout<<"0\n";
    return;
  }

  int a=abs(x-y);
  if(a%d==0){
    cout<<a/d<<endl;
    return;
  }
  int ans=0;
  if((y-1)%d!=0 && (n-y)%d!=0){
    cout<<"-1"<<endl;
    return;
  }
  else if((y-1)%d==0 && (n-y)%d==0){

    int ans1=0,ans2=0;
    ans1=(y-1+d-1)/d + (y-1)/d;
    ans2=(n-y+d-1)/d + (n-y)/d;

    if(ans1<ans2)
     cout<<ans1<<endl;
     else 
     cout<<ans2<<endl;
    }
    else{
        int ans;
        if((y-1)%d==0)
             ans=(y-1+d-1)/d + (y-1)/d;
            else 
            ans=(n-y+d-1)/d + (n-y)/d;
        cout<<ans<<endl;
    }
}

int main(){
int t;
cin>>t;
while(t--)
     solve();
    return 0;
}