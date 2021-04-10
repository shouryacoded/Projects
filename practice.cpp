#include <bits/stdc++.h>
using namespace std;
int main()
{
    int o;
    do{
        int i, j;
        cout << "Enter two numbers to add\n";
        cin >> i >> j;
        cout<<"The sum of the entered numbers is "<<i + j<<endl;
        cout<<"Enter Y to continue... \t";
        o = getchar();
       }
    while(o == 'Y' || o == 'y');
    return 0;
}
