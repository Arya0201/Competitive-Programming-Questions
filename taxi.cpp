#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int i=0,j=v.size()-1;
    int cnt=0;
    while(i!=j)
    {
         if(v[i]+v[j]<=4)
         { v[j]+=v[i];
           i++;
         }else{
            cnt++;
            j--;
         }
    }

    cnt++;
    cout<<cnt<<endl;
    return 0;
}