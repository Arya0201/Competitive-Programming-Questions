#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    bool check=false;
    cin>>s;
    int cnt;
    for(int i=0;i<s.size();i++)
    {
        cnt=0;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]!=s[j])
            {
                cnt++;
            }else{
                break;
            }

        }
        if(cnt>=7)
        {
         check=true;
         break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        cnt=0;
        for(int j=i-1;j>=0;j--)
        {
            if(s[i]!=s[j])
            {
                cnt++;
            }else{
                break;
            }

        }
        if(cnt>=7)
        {
         check=true;
         break;
        }
    }
    if(check)
    {
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
    return 0;
}