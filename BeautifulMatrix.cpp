#include<iostream>
using namespace std;
int main(){
    int num;
    int a,b;
    for (int i = 1; i <=5; i++)
    {
       for (int j = 1; j <=5; j++)
       {
           cin>>num;
            if(num==1)
            {
                a=i;
                b=j;
            }
       }
       
    }
    int ans;
    ans=abs(3-a) + abs(3-b);
    cout<<ans;
}