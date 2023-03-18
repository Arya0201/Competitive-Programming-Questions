#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
int solve(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return INT_MIN;
    }
    if(mp.count(n))
      return mp[n];
    return mp[n]=1+max(solve(n-a,a,b,c),max(solve(n-b,a,b,c),solve(n-c,a,b,c)));
}
int main()
{   int n,a,b,c;
    cin>>n>>a>>b>>c;

    cout<<solve(n,a,b,c);
    return 0;
}