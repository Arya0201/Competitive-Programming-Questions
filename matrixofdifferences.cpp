#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    int min=1;
    int max=n*n;
    
    ll a[n+1][n+1];
    int c=1;
    for (int i = 1; i <=n; i++)
    {
        if(i%2==1)
        {
           for (int j = 1; j <=n; j++)
           {
            if(c%2==1)
            {
                a[i][j]=min++;
            }else{
                a[i][j]=max--;
            }
            c++;
           }
           
        }else{
            for (int j = n; j>=1; j--)
            {
                 if(c%2==1)
            {
                a[i][j]=min++;
            }else{
                a[i][j]=max--;
            }
            c++;
            }
        }
    }
   for (int i = 1; i <=n; i++)
   {
       for (int j = 1; j <=n; j++)
       {
          cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
      
}
int main()
{
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}