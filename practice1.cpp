#include <bits/stdc++.h>
using namespace std;
int Exp(int n1, int n2)
{
    int res = pow(n1, n2);
    return res;
}
int main()
{
    int m, n;
    cout << "Enter the base : ";
    cin >> m;
    cout << "Enter the pwr : ";
    cin >> n;
    cout << "The ans is : " << Exp(m , n);
    return 0;
}