#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

vector<int>vec(n);
for(int i=0; i<n; i++)
    cin>>vec[i];

int p,s,l;
cin>>p;
cin>>s>>l;
 
vec.erase(vec.begin()+p-1);

vec.erase(vec.begin()+s-1,vec.begin()+l-1);


int si=vec.size();
cout<<si<<endl;
for(int x:vec)
    cout<<x<<" ";


    return 0;
}