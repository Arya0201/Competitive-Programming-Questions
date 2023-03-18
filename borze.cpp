#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i=0,n=s.length();

  while(i<n)
  {
    if(s[i]=='.')
    {
        cout<<0;
       
    }else{
        if(s[i+1]=='.')
        {
            cout<<1;
        }else{
            cout<<2;
        }
        i++;
    }
   i++;
  }
}