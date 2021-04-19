#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    cout << "1. The address of a is : " << &a <<endl;
    cout << "1.The value stored in p : " << p << endl;
    cout << "2.The value by *p is of a : " << *p << endl;
    cout << "1.The value *q is the address of p : " << *q <<endl;
    cout << "2.The value **q is : "  << **q <<endl;
    cout << "1.The value of *r is the value stored by q i.e, the address of p : " << *r << endl;
    cout << "The value stored by r is : " << r << endl;
    cout << "The address of q is : " << &q << endl;
    return 0;
}