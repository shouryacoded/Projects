#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << "1. The value stored by a : " << a <<endl;
    cout << "2. The address of a : " << &a <<endl;
    cout << "3. The value pointed by the pointer is : " << *p << endl;
    cout << "4. The address of pointer p is : " << &p <<endl;
    cout << "5. The value stored by the pointer is : " << p << endl;
    cout << "Here the value of 1 & 3 are equal \n And the 2 & 5 are also same \n The address of the pointer itself is unique, though \n it can also be stored by another pointer called Pointer of Pointer " << endl;
    return 0;
}