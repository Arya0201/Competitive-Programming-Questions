#include<bits/stdc++.h>
using namespace std;
int main()
{    int n,k;
     cin>>n>>k;
     int totalmin=240-k;
     int time=0;
     int solveprblm=0;
     int i=1;
     while(time<totalmin && i<=n)
     {
         time+=(5*i);
         if(time<=totalmin)
         {
            solveprblm++;
         }
         i++;
     }
     cout<<solveprblm<<endl;
    return 0;
}