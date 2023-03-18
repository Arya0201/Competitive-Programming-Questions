#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    char maxi=s[0];
     for(int i=1;i<s.size();i++)
     {
        maxi=max(maxi,s[i]);
     }
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==maxi)
         {
             ans+=s[i];
         }
     }

     cout<<ans;
}