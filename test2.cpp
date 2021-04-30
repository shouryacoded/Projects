#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
void doub(int *p, int len)
{
    for(int i = 0; i < len; i++)
    {
        *p = 2 *(*p);
        p++;
    }
}
int main()
{
    system("clear");
    int ar[5] = {2,3,4,5,6};
    int len = sizeof(ar)/sizeof(ar[0]);
    doub(ar,len);
    cout << "Double of the array is : ";
    for(int i = 0; i < len; i++)
    {
        cout << " " << ar[i];
    }
    cout << endl;
    return 0;
}