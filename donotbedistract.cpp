#include<bits/stdc++.h>
using namespace std;
bool solve(string s,int n)
{
    unordered_map<char,int> m;
    int i=0;
    while (i<n)
    {
       char c=s[i];
       if(m.count(c)!=0)
       return false;
       m[c]++;
       i++;
       while(i<n && s[i]==c)
       {
        i++;
       }

    }
    return true;
     
}
int main() 
{   
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(solve(s,n))
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}