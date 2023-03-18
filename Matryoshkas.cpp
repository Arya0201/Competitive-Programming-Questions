#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    vector<pair<long long int,int>> p;
    for(int i=0;i<v.size();)
    {
        int j=i;
        while(i<v.size() && v[i]==v[j])
        {
            i++;
        }

        p.push_back({v[j],i-j});
    }
    long long int ans=p[0].second;
    for (int i = 1; i < p.size(); i++)
    {
        if((p[i].first+1) ==p[i-1].first)
        {
            ans+=max(p[i].second-p[i-1].second,0);
        }else{
            ans+=p[i].second;
        }
    }

    cout<<ans<<endl;
       
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