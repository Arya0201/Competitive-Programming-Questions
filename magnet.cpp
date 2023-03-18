#include<iostream>
using namespace std;
int main()
{  int n;
   cin>>n;
   int arr[n],cnt=0;
   
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
       if(i==0)
       {
        cnt++;
       }else{
        if(arr[i]==arr[i-1])
        {
            continue;
        }else{
            cnt++;
        } 
       }
   }
   cout<<cnt;
    return 0;
}