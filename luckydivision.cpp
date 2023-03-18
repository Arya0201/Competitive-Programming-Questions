#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{   int a=n;
    if(n==0)
    {
        return false;
    }
   bool check=true;
   while(n)
   {
       if(n%10!=7 && n%10!=4)
       {   check= false;
       }
       n=n/10;
   }
   if(check)
   {
       return true;
   }else{
       if(a%4==0 || a%7==0 || a%44==0 || a%77==0 ||a%47==0 || a%74==0 || a%444==0 || a%447==0 || a%474==0 || a%477==0 ||a%744==0 || a%747==0 || a%774==0 || a%777==0)
       {
           return true;
       }else{
           return false;
       }
   }
}
int main()
{   int n;
   cin>>n;
   if(isLucky(n))
       cout<<"YES";
    else
       cout<<"NO";
            
    return 0;
}