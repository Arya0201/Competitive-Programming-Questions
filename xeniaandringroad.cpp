#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,m;
   cin>>n>>m;

   vector<int> v(m);
   for(int i=0;i<m;i++)
   {
    cin>>v[i];
   }
   long long int cnt=0;
   int start=1;
   for(int i=0;i<m;i++)
   {
     if(v[i] >= start)
     {
        cnt+=v[i]-start;
        start=v[i];
     }else{
       cnt+=(n-start)+v[i];
        start=v[i];
     }
   }

   cout<<cnt;
    return 0;
}
