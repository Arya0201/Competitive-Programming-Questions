#include<iostream>
using namespace std;
int main()
{
    int n;
    bool check=false;
    cin>>n;

    while(n--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            check=true;
        }
    }
    if(check)
    {
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }

    return 0;
}