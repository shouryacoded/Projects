#include<bits/stdc++.h>
using namespace std;
int large(int *a,int size)
{
    int num;
    for(int i = 0; i < size; i ++)
    {
        if(*a > *(a+1))
        {
            num = *a;
        }
        a++;
    }
    return num;
}
int main()
{
        int size;
        cin >> size;
        int ar[size];
        for (int i = 0; i < size; i++)
        {
            cin >> ar[i];
        }
        cout << large(ar, size);
    return 0;
}