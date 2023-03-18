#include<bits/stdc++.h>
using namespace std;
int main()
{  string s,t;
    cin>>s>>t;
    bool check=false;
    if(s.size()==t.size())
    {
        int i=0,j=t.size()-1;
         while(i<t.size())
         {
             if(s[i]!=t[j-i])
             {   check=false;
                 break;
             }
             i++;
             check=true;
         }  
    }
    if(check)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}