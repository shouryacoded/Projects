#include<bits/stdc++.h>
using namespace std;
struct addr
{
    int houseno;
    char area[26];
    char city[26];
    char state[26];
};
struct emp
{
    int empno;
    char name[26];
    char design[16];
    addr address ;
    float basic;
};
//nested struct is shown above
int main()
{
    system("cls");
    /*
    emp worker;
    cout << "Enter the name of worker and city \n";
    cin >> worker.name;
    cin >> worker.address.city;
    cout << "/n";
    cout << "Name : " << worker.name <<  endl;
    cout << "City : " << worker.address.city << endl;
    */
    return 0;
}