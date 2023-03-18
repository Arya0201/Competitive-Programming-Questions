#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
   bool check=true;
   
   for (int i = 1; i < s.length(); i++)
   {
     if(islower(s[i]))
     {
        check=false;
        break;
     }
   }
   
   if(check)
   {
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
        cout<<(char)toupper(s[i]);
        else
        cout<<(char)tolower(s[i]);
    }
    
   }else{
    cout<<s;
   }
    return 0;
}