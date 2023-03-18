#include<bits/stdc++.h>
using namespace std;
vector<long long int> v(10000000,-1);
long long int findfac(int n)
{
    if(n==0 || n==1)
    return 1;

   if(v[n]!=-1)
   return v[n];

   v[n]=n*findfac(n-1);
  return v[n];
}
int main()
{   int n,x;
    cin>>n>>x;
    int arr[n];
    v[0]=v[1]=1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=findfac(arr[i]);
    }
    
    long long int div=findfac(x);

    if(sum%div==0)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}