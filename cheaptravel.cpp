#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=0;
    
    ans+=(n/m)*b;
int temp=ans+((n%m)*a);
    ans+=b;
    ans=min(n*a,min(temp,ans));

    cout<<ans;
    return 0;
}