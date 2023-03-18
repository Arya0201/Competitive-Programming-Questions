#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    
    cout<<2*(x-y-1)+2<<"\n";
        
        for(int i=x; i>=y; i--){
            cout<<i<<" ";
        }
        
        for(int i=y+1; i<x; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
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