#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    int x[] = {1,2,3,4,5};
    int *ptox;
    ptox = x;
    for(int i = 0; i < 5; i++)
    {
        cout << *ptox;
        ptox++;
    }
    cout << "\nvalue at the curent address of the pointer is : " << *--ptox << endl;
    cout << "the next line would be flushing the address stored \n in the pointer by assigning the address of the first element of the array \n " ;
    ptox = x;
    cout << "Cleared" << endl;
    cout << "Lets check by printing the value stored by the pointer ";
    cout << "\n"<< *ptox;
    return 0;
}