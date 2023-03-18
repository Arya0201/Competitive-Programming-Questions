#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,temp,sum=0,neg=0,mini=1000000000,zero=0;
    cin>>n;
    for (long long int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp<0)
        {
            neg++;
        }
        if(temp==0)
        zero++;
        sum+=abs(temp);
        mini=min(mini,abs(temp));
    }

    if(neg==0)
    {
        cout<<sum<<endl;    
    }else if(neg%2==0)
    {
        cout<<sum<<endl;
    }else if(neg%2==1)
    {   
        if(zero==0)
        cout<<sum-(2*mini)<<endl;
        else
        cout<<sum<<endl;
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