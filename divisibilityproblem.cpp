#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>> t;
    while (t--)
    {
        int ar,b;
        cin>>ar>>b;
       if(ar < b){
          cout<<b-ar<<endl;
       }else{
        int mindiff=INT_MAX;
         int i=1;
        while((i*b) < ar)
        {  
            i++;
        }
        int diff=(i*b) - ar;
        cout<<diff<<endl;
       }
    }
    
    return 0;
}