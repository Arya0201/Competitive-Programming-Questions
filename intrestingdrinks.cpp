#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int q;
    cin>>q;
    vector<long long int> m(q);
    for(int i=0;i<q;i++)
    {
        cin>>m[i];
    }
    sort(x.begin(),x.end());
    for(int i=0;i<q;i++)
    {
        int price=m[i];
        int ans=upper_bound(x.begin(),x.end(),price)-x.begin();
        cout<<ans<<endl;
    }
    return 0;
}