#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int a,b;
     cin>>a>>b;
    a=abs(a);
    b=abs(b);

    if(a==b)
    {
        cout<<a+b<<endl;
    }else{
        cout<<2*max(a,b)-1<<endl;
    }
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