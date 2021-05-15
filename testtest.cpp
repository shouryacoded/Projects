#include<bits/stdc++.h>
using namespace std;
class Animal
{   public:
    string AnName;
    int NoOfFeets;
    bool isMammal;
    void putval()
    {

    }
};
class dog : public Animal
{
    public:
    int tail = 1;
};
int main()
{
    system("clear");
    dog d;
    d.AnName = "Finn";
    d.NoOfFeets = 4;
    d.isMammal = true;
    cout << "The name is : " << d.AnName << endl;
    cout << "The numbers of feets is : " <<d.NoOfFeets << endl;
    cout << "Is it a mammal : " << d.isMammal <<endl;
    return 0;
}