#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,a1=0,b1=0,c1=0;
   cin>>n;
   int a[n],b[n],c[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i]>>b[i]>>c[i];
       a1+=a[i];
       b1+=b[i];
       c1+=c[i];
   }
   if(a1==0 && b1==0 & c1==0)
   {
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
    return 0;
}