#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
  cin>>n;
    char c;
    int a=0,b=0;
    for (int i = 0; i < n; i++)
    {
           cin>>c;
        if(c=='A')
        {
            a++;
        }else{
            b++;
        }
    }
    if(a>b)
    {
        cout<<"Anton";
    }else if(b>a)
    {
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
 return 0;   
}