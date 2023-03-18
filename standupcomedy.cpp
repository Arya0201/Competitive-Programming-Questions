#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    
    if(a1==0)
    {
        if(a2!=0 || a3!=0 || a4!=0)
        {
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
        return;
    }

    int ans=a1;

    if(a2>a3)
    swap(a2,a3);

    ans+=2*a2;

    a3-=a2;

    ans+=min(a1+1,a3+a4);
    cout<<ans<<endl;

}
int main()
{   
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}