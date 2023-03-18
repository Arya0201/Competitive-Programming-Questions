#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
   cin>>t;
   while (t--)
   {
    /* code */
    int n;
    cin>>n;
     int i=n/2;
     int j=n;

     if(n%2==1) i=i+1;

     while (i>0)
     {
        /* code */
        cout<<i<<" ";
        i--;
        if(i==0)break;
        cout<<j<<" ";
        j--;
     }
     
     if(n%2==0)cout<<j;
     cout<<endl;

   }
   
    return 0;
}