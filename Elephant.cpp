#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   cin>>n;
   int cnt=0;
   while(n)
   {
       if(n>=5)
       {
           cnt+=n/5;
           n=n%5;
       }
       else if(n>=4)
       {
             cnt+=n/4;
             n=n%4;
       }
       else if(n>=3)
       {
           cnt+=n/3;
           n=n%3;
       }
       else if(n>=2)
       {
           cnt+=n/2;
           n=n%2;
       }
       else{
           cnt+=n;
           n=n%1;
       }
   }
   cout<<cnt<<endl;

    return 0;
}