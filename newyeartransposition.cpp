#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> &v,int n,int t)
{
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int currIndex=q.front();
        q.pop();
        if(currIndex==t)
        return true;
        if(currIndex > t)
        break;
        if(currIndex+v[currIndex] <=n)
        {
            q.push(currIndex+v[currIndex]);
        }
    }

    return false;
}
int main()
{   int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
    }

    
    if(solve(v,n,t))
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}