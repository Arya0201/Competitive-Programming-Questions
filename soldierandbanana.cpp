#include<bits/stdc++.h>
using namespace std;
int main()
{ int k,n,w;
  cin>>k>>n>>w;
  int a=0;
  
  for (int i= 1; i <=w; i++)
  {
      /* code */
      a+=(k*i);
  }
  if(a<n)
  cout<<0;
  else
  cout<<a-n;
  
    return 0;
}