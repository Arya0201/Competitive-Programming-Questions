#include<iostream>
using namespace std;
int main()
{  string s;
  cin>>s;
  bool check=false;
  for(auto i: s)
  {
    if(i=='H' || i=='Q' || i=='9')
    {
      check=true;
      break;
    }
  }
  if(check)
     cout<<"YES";
  else
     cout<<"NO";   
    return 0;
}