#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k,d,w;
   cin>>n>>k>>d>>w;

   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
     cin>>v[i];
   }
   int ans=0;
   int i=0;
   while (i<n)
   {
     int j=i;
     while (j<n && v[j]-v[i]<=w && j-i<=k)
     {
      j++;
     }
     ans++;
     if(j-i>k)
     {
      i+=k-1;
     }else{
      int rem=k-(j-i);
      while (j<n && rem>0 && v[j]-(v[i]+w)<=d)
      {
         rem--;
         j++;
      }
      i=--j;
     }
     i++;
   }
   cout<<ans<<"\n";
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