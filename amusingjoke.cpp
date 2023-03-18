#include<bits/stdc++.h>
using namespace std;
int main()
{   string s1,s2,s;
    cin>>s1>>s2>>s;
    string c;
    c=s1+s2;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if(s==c)
      cout<<"YES";
    else
      cout<<"NO";  
    return 0;
}