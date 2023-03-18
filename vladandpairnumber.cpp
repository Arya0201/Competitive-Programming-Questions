#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long x;
    cin>>x;
    
    if(x%2==1)
    {
        cout<<-1<<endl;                                                       
    }else{
        long long a=x+(x/2);
        long long b=x/2;

        if((a^b)==x)
        {
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
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