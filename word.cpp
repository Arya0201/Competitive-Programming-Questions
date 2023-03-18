#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int cap=0,sml=0;
     for (int i = 0; i < s.size(); i++)
     {
         if(s[i]>='A' && s[i]<='Z')
         {
               cap++;
         }else{
             sml++;
         }
     }
    if(cap>sml)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s<<endl;
    return 0;
}