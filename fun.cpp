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
int disp(int a[8])
{
    int num = a[0] ;
    for(int i = 0; i < 8; i++)
    {
        if(a[i] > num)
        num = a[i];
    }
    return num;
}
int main()
{
    system("cls");
    int ar[8] = {11, 24, 5, 8, 76, 13, 3, 9};
    cout << "The lagest number is : " << disp(ar) << endl;
    return 0;
}

/*int fac(int n)
{
    if(n==1)
    return 1;
    else
    return n*fac(n-1);
}
int main()
{
    system("cls");
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The factorial of " << num << " is :  " <<fac(num) << endl;
    return 0;
}*/