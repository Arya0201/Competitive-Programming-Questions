#include<iostream>
using namespace std;
int main()
{   int n;
    cin>> n;
    int arr[n];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >>temp;
        arr[i]=temp;
        ans[temp-1]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}