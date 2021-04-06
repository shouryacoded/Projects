#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin >> n;
    cout<<n;
    while(n)
    {
        char wrd[100];
        cin >> wrd;
        l=0;
        l = strlen(wrd);
        if(l > 10)
        {
            cout<<wrd[0]<<l-2<<wrd[l-1];
        }
        else
            cout<<wrd;
        n--;
    }
    return 0;
}