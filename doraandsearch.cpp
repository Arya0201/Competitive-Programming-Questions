#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0;
    int r=n-1;

    int min=1;
    int max=n;
    bool check=false;
    while(l<r)
    { 
        int i=min,j=max;
        if((v[l]==i && v[r]==j) || (v[l]==j && v[r]==i))
        {
            l++;
            r--;
            min++;
            max--;
        }else if(v[l]==i){
            l++;
            min++;
        }else if(v[l]==j)
        {
            l++;
            max--;
        }else if(v[r]==i)
        {
            r--;
            min++;
        }else if(v[r]==j)
        {
            r--;
            max--;
        }else{
         check=true;
         break;
        }
    }
    if(check)
    {
        cout<<l+1<<" "<<r+1<<endl;
    }else{
        cout<<-1<<endl;
    }
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