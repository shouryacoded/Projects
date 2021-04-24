#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    char ch , ch1;
    do{
            cout << "Enter a character : " ;
            cin >> ch;
            if(ch >= 65 && ch <=90)
            {
                ch = tolower(ch);
                cout << "Modified : " << ch << endl;
            }
            else 
            if(ch >= 97 && ch <= 122)
            {
                ch = toupper(ch);
                cout << "Modified : " << ch << endl;
            }
            else 
            {cout << "Please enter a number" << endl;}
        cout << "Enter Y to continue... ";
        cin >> ch1;
    }while(ch1 == 'y' || ch == 'Y');
    return 0;
}