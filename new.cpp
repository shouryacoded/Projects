#include<bits/stdc++.h>
using namespace std;
void change(int m);
int main()
{
    system("cls");
    int orig = 10;
    cout << "Yhe original value is : " << orig << endl;
    change(orig);
    cout << "Value after change () is over : " << orig << endl;
    return 0;
}
void change(int fOrig)
{
    fOrig = 20;
    cout << "Value of orig in function change () is : " << fOrig <<endl;
    return;
}