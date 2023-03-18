#include<bits/stdc++.h>
using namespace std;
long long int cntDigit(long long int num)
{
    long long int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }

    return sum;
}
void solve()
{
    long long int n;
    cin>>n;
    string s= to_string(n);
    long long int a=0,b=0;
    bool flag=true;
    for (int i = 0; i < s.length(); i++)
    {
        long long int num=s[i]-'0';
            a*=10;
            b*=10;
        if(num%2==0)
        {
            a+=num/2;
            b+=num/2;
        }else{
            if(flag)
            {
                a+=(num/2 + 1);
                b+=(num/2);
            }else{
                a+=(num/2 );
                b+=(num/2 +1);
            }
                flag=!(flag);
        }
    }

    cout<<a<<" "<<b<<endl;
    
}
int main()
{
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}