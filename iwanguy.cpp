#include<iostream>
#include<map>
using namespace std;

int main()
{    int n;
     cin>>n;
     int p,q,temp;
    map<int,bool> m;
    for(int i=1;i<=n;i++)
    {
         m[i]=false;
    }
    cin>> p;
    for(int i=1;i<=p;i++)
    {
         cin>>temp;
         m[temp]=true;
    }
    cin>> q;
    for(int i=1;i<=q;i++)
    {
         cin>>temp;
         m[temp]=true;
    }
    bool check=true;
    for (auto i:m)
    {
      if(i.second==false)
      { check=false;
        break;
      }
    }
    if(check)
    {
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}