#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,even=0,odd=0,eindex,oindex;
    cin>>n;
     
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even++;
            eindex=i;
        }else{
            odd++;
            oindex=i;
        }
    }
    
    if(even==1 && odd==(n-1))
    {
        cout<<eindex+1;
    }else{
        cout<<oindex+1;
    }
    return 0;
}