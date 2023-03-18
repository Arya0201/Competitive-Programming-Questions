#include<bits/stdc++.h>
using namespace std;
int main()
{    int n,cnt=0;
      cin>>n;
      while (n--)
      {  int a,b;
        cin>>a>>b;
          if(a<=(b-2))
          {
              cnt++;
          }
          
      }
      cout<<cnt;
    return 0;
}