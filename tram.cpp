#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
  cin>>n;
  int a[n],b[n];
  int c=0,d=0,max=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
       
   }

  for (int i = 0; i < n; i++)
  {
      c=d-a[i];
      d=c+b[i];
      if(d>max)
      {
          max=d;
      }
  }
  

   cout<<max;

    return 0;
}