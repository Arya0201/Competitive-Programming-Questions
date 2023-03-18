#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    int size=t;
    long long arr[t];
    int i=0;
    long long int n;
    while(t--)
    {
       cin>>n;
      if(n%2==0)
      {
        arr[i++]=(n/2)-1;
      }else{
        arr[i++]=(n/2); 
      }
    }
    for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<endl;
    }
    return 0;
}