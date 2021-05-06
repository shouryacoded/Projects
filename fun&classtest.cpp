#include<bits/stdc++.h>
using namespace std;
class prod{
    int a, b;
    public:
    int pro(int a, int b)
    {
        int c = a*b;
        return c;
    }
};
int main()
{
    prod a1;
    system("clear");
    int a = 2, b = 3;
    cout << "The product of the numbers are : " << a1.pro(a,b);
    return 0;
}