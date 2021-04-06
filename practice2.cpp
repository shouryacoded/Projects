#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ct, ct1, ct2;
    cin>>n;
    int ar[n][3];
    if(n >= 1 && n <= 1000)
    {
        for(int j = 0; j < n; j++)
        {
            ct = 0;
            for(int k = 0; k < 3; k++)
            {
                cin>>ar[j][k];
                ct += ar[j][k];
                if(ct >= 2)
                ct1++;
            }
            if(ct1 == 1)
            ct2++;
        }
    }
    cout<<ct2;
    return 0;
}