#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int best,worst;
    cin>>best;
    worst=best;
    int num,cnt=0;
    while (--n)
    {
      cin>>num;
      if(num<worst)
      {
         cnt++;
         worst=num; 
      }
      if(num>best)
      {
         cnt++;
         best=num; 
      }
    }

    cout<<cnt; 
    return 0;
}