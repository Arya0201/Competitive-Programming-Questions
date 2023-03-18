#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v[n+1];
    for (int i = 0; i < n; i++)
    {
    for (int j = 1; j <n ; j++)
    {
        int temp;
        cin>>temp;
        v[temp].push_back(j);
    }
    }

    for (int i = 1; i <=n; i++)
    {
        sort(v[i].begin(),v[i].end());
    }

    vector<int> ans(n+1);
    for (int i = 1; i <=n; i++)
    {
         if(v[i][n-2]==n-1)
         {
            if(v[i][0]==n-1)
            {
                ans[n]=i;
            }else{
                ans[n-1]=i;
            }
         }else{
            ans[v[i][n-2]]=i;
         }
    }


    for (int i = 1; i <=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;
}
int main()
{   int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}