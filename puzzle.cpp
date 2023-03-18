#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int i=0,j=n-1;
    int diff=INT_MAX;
    sort(v.begin(),v.end());
   
    diff=min(diff,v[j]-v[i]);
    j++;
    i++;
    while(j<m)
    {
     diff=min(diff,v[j++]-v[i++]);
    }
    cout<<diff;
    return 0;
}