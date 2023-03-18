#include <bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    cin>>s;
    string s1;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]!='+')
       {
           s1.push_back(s[i]);
       }
    }
    sort(s1.begin(),s1.end());
    s.erase();
    for(int i=0;i<s1.size();i++)
    {
      s.push_back(s1[i]);
      s.push_back('+');
    }
    s.pop_back();
     cout<<s;
    return 0;
}