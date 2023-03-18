#include<iostream>
using namespace std;
int main(){
    int n,X=0;
    cin>>n;
    string s[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>s[i];
        if(s[i] == "++X"){
             ++X;
        }else if(s[i] == "X++")
        {
           X++;
        }else if(s[i]=="--X")
        {
            --X;
        }else{
            X--;
        }
    }
    cout<<X;
    return 0;
}