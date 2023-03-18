#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n],totalSum=0,sum1=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        totalSum+=arr[i];
    }
    int half=totalSum/2;
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        sum1+=arr[i];
        cnt++;
        if(sum1>half)
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}