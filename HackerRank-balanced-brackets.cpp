#include<iostream>
#include<stack>
using namespace std;
int main()
{    int n;
    cin>>n;

    while(n--)
    {   string s;
        cin>>s;

        stack<char>st;
        int i;
       for(i=0; i<s.size(); i++)
        {   char c=s[i];

            if(c=='(' || c=='{' || c=='[')
                st.push(c);
            else
            {
                if(st.empty())
                {  cout<<"NO"<<endl;
                    break;
                }
                
                char t=st.top();
                if((c==')' && t=='(') || (c=='}' && t=='{') || (c==']' && t=='['))
                    st.pop();
                else
                {   cout<<"NO"<<endl;
                    break;}
            }
        }
        
        if(i==s.size())
        {
            if(st.empty())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
  return 0;
}