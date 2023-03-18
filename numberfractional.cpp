#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    unordered_map<int,long long int> m;
    for (int i = 2; i*i<=(n); i++)
    {
        long long int cnt=0;
        while(n!=0 && n%i==0)
        {
            cnt++;
            n=n/i;
            if(m.count(cnt)!=0)
            {
                m[cnt]*=i;
            }else{
                m[cnt]=i;
            }
        }
    }
    if(n != 1) {
            if(!m.count(1))
                m[1] = n;
            else {
                m[1]*=n;
            }
        }
    long long int sum=0;
    for(auto i:m)
    {
        sum+=i.second;
    }

    cout<<sum<<endl;
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