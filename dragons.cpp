#include<bits/stdc++.h>
using namespace std;
int main()
{    int s,n;
     cin>>s>>n;

     vector<pair<int,int>> v;
     int a,b;
     for(int i=0;i<n;i++)
     {
       cin>>a>>b;
       v.push_back({a,b});
     }

     bool check=true;
     sort(v.begin(),v.end());

     for ( auto i:v)
     {
        if(s>i.first)
        {
            s+=i.second;
        }else{
            check=false;
            break;
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