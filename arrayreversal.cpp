#include<bits/stdc++.h>
using namespace std;
int main()
{
    // In this program the array is revered the condition is correct but the thing is that even if it is reversed the the value at the indexes of array remain the same & in the second for loop only the elemts are printed in the reverse order.
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