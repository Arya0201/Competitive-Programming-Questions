#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int res=0;
    unordered_set<char> st;
    vector<int> prefix(n),sufix(n);

    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
        prefix[i]=st.size();
    }

    st.clear();
    for (int i = n-1; i>=0; i--)
    {
        st.insert(s[i]);
        sufix[i]=st.size();
    }
    for (int i = 0; i < n-1; i++)
    {
        res=max(res,prefix[i]+sufix[i+1]);
    }

    cout<<res<<endl;
}
int main()
{   
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}