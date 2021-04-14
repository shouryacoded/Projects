#include <bits/stdc++.h>
using namespace std;
void strLen(string Fname, string Lname)
{
    int m = Fname.length();
    int n = Lname.length();
    cout << "The length of Fname is : " << m << endl;
    cout << "The lenth of Lname is : " << n << endl; 
} 
int main()
{
    system("cls");
    string F, L;
    cout << "Enter your First name : ";
    getline(cin, F);
    cout << "Enter your last name : ";
    getline(cin, L);
    strLen(F, L);
    return 0;

}