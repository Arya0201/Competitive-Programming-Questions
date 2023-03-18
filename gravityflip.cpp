#include <bits/stdc++.h>

using namespace std;



int main() {
   
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    for (int i = n-1; i>=0; i--)
    {    int index=0;
         int maxi=INT_MIN;
        
         bool check=false;
        for (int j = i-1; j >=0; j--)
        {
            if(arr[j] > arr[i] &&  arr[j] > maxi)
            {
                maxi=arr[j];
                index=j;
                check=true;
               
            }
        }
        if(check){
        int diff=arr[index]-arr[i];
         arr[i]+=diff;
         arr[index]-=diff;
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}