#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(int j = n - 1; j >= 0; --j)
    {
        cout <<  ar[j] << " " ;
    }
    return 0;
}