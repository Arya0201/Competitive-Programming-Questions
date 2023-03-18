#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string w;
        cin>>w;
        if(w.length()<=10){
            cout<<w<<endl;
        }else{
            cout<<w.front()<<(w.length()-2)<<w.back()<<endl;
        }
    }
    return 0;
}