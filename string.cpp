#include<iostream>
using namespace std;
char lowarCase(char c){
    if(c>=97 && c<=122)
    {
        return c;
    }else{
        return (c-'A'+'a');
    }   
}
int strCompare(string s1,string s2,int n)
{    if(s1.empty() && s2.empty())
            return 0;
      else if(s1.empty() && (!s2.empty()))
             return -1;
     else if(s2.empty() && (!s1.empty()))
             return 1;              
    for(int i=0;i<n;i++){
        char c=lowarCase(s1[i]);
        char d=lowarCase(s2[i]);
        if(d!=c)
        {
            if(c>d)
            {
                return 1;
            }else{
                return -1;
            }
        }
    }     
    return 0;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    cout<<strCompare(s1,s2,n);
}