#include <bits/stdc++.h>
using namespace std;
char capitalize(char c)
{
    if (c >= 97 && c <= 122)
    {
        return (c - 'a' + 'A');
    }
    else
    {
        return c;
    }
}
int main()
{
    string s;
    cin>>s;
    s.front() = capitalize(s.front());
    cout<<s;

    return 0;
}