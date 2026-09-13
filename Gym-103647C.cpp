#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;

    queue<string>p;
    string c;
    int x;

    while(n--) {
        cin>>x;
        if(x==1)
         { 
          cin>>c;
          p.push(c);}
        else if(x==2)
        {
          string temp=p.front();
          p.pop();
          cout<<temp<<endl;
          p.push(temp);
        }

    }

    return 0;
}