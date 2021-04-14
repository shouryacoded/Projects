#include <bits/stdc++.h>
using namespace std;
int rec(int k)
{
    int ct = 1;
    k--;
    rec()
    {
        ct++;
    }
    ct/=2;
    return ct;
}
int main()
{
    system("cls");
    int n = 0;
    cout<<"Enter a multiple of 2 : " ;
    cin >> n;
    if(n % 2 == 0)
    {
        rec();
    }



    return 0;
}