#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;
   cin>>n;
   long long int totalSum=(2*n * (2*n + 1))/2;
   long long int temp= totalSum-((n*(n-1))/2);

   if(temp%n!=0)
   {
    cout<<"No"<<endl;
    return;
   }else{
    cout<<"YES"<<endl;
   }

   long long int x=temp/n;

   int i=1;
   int target=x-1;
   while (i<=n)
   {
    cout<<i<<" "<<target<<endl;
    i+=2;
    target--;
   }
   i=2;
   target=n+n;
   while (i<=n)
   {
    cout<<i<<" "<<target<<endl;
    i+=2;
    target--;
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
    
}