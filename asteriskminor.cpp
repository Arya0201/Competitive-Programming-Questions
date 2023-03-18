#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;

    if(a[0]==b[0])
    {
        cout<<"YES"<<endl;
        cout<<a[0]<<"*"<<endl;
    }else if(a.back()==b.back())
    {
        cout<<"YES"<<endl;
        cout<<"*"<<a.back()<<endl;
    }else{
        string ans="";
        for(int i=0;i<a.length()-1;i++)
        {   
            bool check=false;
            for(int j=0;j<b.length()-1;j++)
            {
                if(a[i]==b[j] && a[i+1]==b[j+1])
                {
                    ans.push_back(a[i]);
                    ans.push_back(a[i+1]);
                    check=true;
                    break;
                }
            }
            if(check)
            {
                break;
            }
        }

        if(ans.length())
        {   cout<<"YES"<<endl;
            cout<<"*"<<ans<<"*"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{   
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}