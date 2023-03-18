#include<bits/stdc++.h>
using namespace std;
int main()
{   unordered_map<string,int> mp;
    int t=1;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        if(mp[s] ==0)
        {
            cout<<"OK\n";
            mp[s]++;
            
        }else{
            cout<<s<<mp[s]<<"\n";
            mp[s]++;
        }
    }
    
    return 0;
}