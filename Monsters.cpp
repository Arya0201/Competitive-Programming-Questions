#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long cnt=0;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long reduceto=1;

    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
      /* code */
      if(v[i]<reduceto)
       continue;

       long long k=v[i]-reduceto;
       cnt+=k;
       reduceto++;
    }
    
    
    cout<<cnt<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}