#include<bits/stdc++.h>
using namespace std;
int large(int *a,int size)
{
    int num = 0;
    for(int i = 0; i < size; i ++)
    {
        if(*a > *(a+1) && *a > num)
        {
            num = *a;
        }
        a++;
    }
    return num;
}
int small(int *a,int size)
{
    int num;
    for(int i = 0; i < size; i ++)
    {
        if(*a < *(a+1))
        {
            num = *a;
        }
        a++;
    }
    return num;
}
int main()
{
        system("clear");
        int size;
        cin >> size;
        int ar[size];
        for (int i = 0; i < size; i++)
        {
            cin >> ar[i];
        }
        cout << "Greatest " << large(ar, size) << endl;
        cout << "Smallest " << small(ar,size) << endl;
    return 0;
}