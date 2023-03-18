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
int main(){
    string s,s1="";
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.empty())
        {
            break;
        }
        int ans=lowarCase(s[i]);
          if(ans=='a' || ans=='e' || ans=='i' || ans=='o' || ans=='u' || ans=='y')
          {
              continue;
          }
          else{
              s1.push_back('.');
              s1.push_back(ans);
          }
    }
     cout<<s1;
    return 0;
}