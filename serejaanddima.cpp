#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l=0,r=n-1;
    vector<int> sum(2,0);
    bool check=true;
    while(l<=r)
    {
        int large;
        if(v[l]>=v[r])
        {
            large=v[l];
            l++;
        }else{
            large=v[r];
            r--;
        }
        if(check)
        {
            check=false;
            sum[0]+=large;
        }else{
            check=true;
            sum[1]+=large;
        }
    }

    cout<<sum[0]<<" "<<sum[1];
    return 0;
}