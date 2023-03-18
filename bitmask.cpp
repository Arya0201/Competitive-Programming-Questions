#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
   cin>>n;
  long arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
   for (int i = 0; i < n; i++){
       
    if(arr[i]%2==0)
    {
        if(!(arr[i]&(arr[i]-1)))
        {
          cout<<arr[i]+1<<endl;
        }else{
          cout<<(arr[i]&~(arr[i]-1))<<endl;
        }
    }else{
        if(arr[i]>1){
          cout<<1<<endl;
        }else{
          cout<<3<<endl;
        }
    }
 }  
    return 0;
}