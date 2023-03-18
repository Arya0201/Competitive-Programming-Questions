#include<bits/stdc++.h>
using namespace std;
void solve()
{   int n;
    long long int c;
    cin>>n>>c;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        v[i]=v[i]+i+1;
    }

    sort(v.begin(),v.end());
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i] <=c)
        {
            ans+=1;
            c-=v[i];
        }else{
            break;
        }

    }

    cout<<ans<<endl;
}
int main()
{   int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}