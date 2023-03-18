#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int num1 = a + b + c;
    int num2 = a * b * c;
    int num3 = (a + b) * c;
    int num4 = a * (b + c);

    int maxi = INT_MIN;
    if (num1 > maxi)
        maxi=num1;
    if(maxi < num2)
       maxi=num2;
    if(maxi < num3)
     maxi=num3;
     if(maxi < num4)
     maxi=num4;

     cout<<maxi;       
    return 0;
}
