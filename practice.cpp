#include <bits/stdc++.h>
#include <iostream>
using namespace std;


long num(int n1, int n2 = 2);
int main()
{
    char op;
    int m = 0, n = 0;
    do
    {
    
    cout << "Enter the numbers to be multiplied : ";
    cin >> m ;
    int ans =  num(m );
    cout << "The answer is : " << ans << endl;
    cout << "Enter Y / y to continue...";
    cin >> op;

}
    while(op == 'Y' || op == 'y');
    return 0;
}
long num(int n1, int n2)
{
    long result = pow(n1, n2);
    return result;
}