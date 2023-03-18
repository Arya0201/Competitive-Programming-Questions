#include<iostream>
using namespace std;
int main()
{   long long int n,k,a,b;
    cin>>n>>k;
    a=k*2-1;
    if(a>n)
    {
        if(n%2==0)
          b=n/2;
        else
          b=n/2+1;
          k=k-b;
          b=k*2;
          cout<<b;  
    }else{
        cout<<a;
    }
    return 0;
}