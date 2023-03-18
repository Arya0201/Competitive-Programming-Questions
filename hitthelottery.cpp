#include<iostream>
using namespace std;
int main()
{   int n,cnt=0;
    cin>>n;
    while(n>0)
    {
       if(n>=100)
       {
        cnt+=n/100;
        n=n%100;
       }else if(n>=20)
       {
         cnt+=n/20;
        n=n%20;
       }else if(n>=10)
       {
        cnt+=n/10;
        n=n%10;
       }else if(n>=5)
       {
         cnt+=n/5;
        n=n%5;
       }else{
         cnt+=n/1;
        n=n%1;
       }
       
    }
    cout<<cnt;
    return 0;
}