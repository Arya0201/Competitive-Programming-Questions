#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if(flag)
            {
                cout<<" ";
                flag=0;
            }
            continue;
        }else{
            cout<<s[i];
            flag=1;
        }
    }
    return 0;
}