#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    cin.ignore();
    string s;

    while(t--) {
        getline(cin,s);
        string w="";

        for(int i=0; i<=s.size(); i++) {
            if(i==s.size() || s[i]==' ') {
                reverse(w.begin(),w.end());
                cout<<w;

                if(i!=s.size()) cout<<" ";
                w="";
            }
            else {
                w+=s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}