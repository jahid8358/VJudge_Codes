#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

for(int z=1; z<=t; z++){
    string s;
    cin>>s;

    int flag=0;
    int j=s.length();
    for(int i=0; i<s.length()/2; i++){
        if(s[i]!=s[j-i-1])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    cout<<"Case "<<z<<": Yes\n";
    else
    cout<<"Case "<<z<<": No\n";
}
return 0;}
