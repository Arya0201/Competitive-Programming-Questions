#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    getline(cin,s);
    set<char> a;
    for(auto i:s)
    {
        if(i>='a' && i<='z')
        a.insert(i);
    }
    cout<<a.size();
    return 0;
}