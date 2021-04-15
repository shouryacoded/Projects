#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int a = 5;
    int *ptr;
    ptr = &a;
    cout << "The value of a is : " << a <<endl;
    cout << "The address of a is : "<< &a << endl;
    cout << "The address of pointer is : "<< &ptr << endl;
    cout << "The value of ptr is : (should be = &a) ### " << ptr << endl;
    cout << "Dereferance of ptr should print the value of a : " << *ptr << endl;
    cout << "We also change the value of 'a' using the derefenced ptr i.e, *ptr to '8' " << endl;
    *ptr = 8;
    cout << "The new value of *ptr is  : " << *ptr <<endl;
    cout << "Address of *ptr : " << &*ptr << endl;;
    a = 10;
    cout << "Adress of a is :  " << &a << endl;
    cout << "Change in the value of ptr : " << *ptr << endl;
    return 0;
 }