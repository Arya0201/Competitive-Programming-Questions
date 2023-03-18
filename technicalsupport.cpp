#include<bits/stdc++.h>
using namespace std;
int main()
{   int t=1;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;

      for (int i = 0; i < n; i++)
      {
        if(s[i]=='Q')
        {
            for (int j=i+1; j < n;j++)
            {
                if(s[j]=='A')
                {
                    s[j]=s[i]='0';
                    break;
                }
            }
        }
      }
       
       bool flag=true;
       for (auto i:s)
       {
        if(i=='Q')
        {
            flag=false;
            break;
        }
       }
       
       if(flag) cout<<"YES\n";
       else cout<<"NO\n";
    }
    
    return 0;
}