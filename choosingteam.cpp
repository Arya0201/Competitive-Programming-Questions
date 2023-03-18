#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(v[i] <= 5 && (5-v[i]) >=k)
        {
            cnt++;
        }
    }

    if(cnt>=3)
    {
        cout<<cnt/3;
    }else{
        cout<<0;
    }
    return 0;
}