#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   cin>>n;
   int arr[n][2];
   int h,a;
   for(int i=0;i<n;i++)
   {
    cin>>h>>a;
    arr[i][0]=h;
    arr[i][1]=a;
   }
   int cnt=0;
   for (int  i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        if(arr[i][0]==arr[j][1])
        {
            cnt++;
        }
         if(arr[i][1]==arr[j][0])
        {
            cnt++;
        }
     }
   }
   cout<<cnt;
    return 0;
}