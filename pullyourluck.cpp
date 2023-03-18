#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,x,p;
    cin>>n>>x>>p;
    bool check=false;
    for (ll i = 1; i <=min(p,2*n);i++)
    {
        if((x+((i*(i+1))/2))%n==0)
        {
            check=true;
            cout<<"YES"<<endl;
            break;
        }
    }
    
    if(!check)
    cout<<"NO"<<endl;
}
int main()
{   
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}