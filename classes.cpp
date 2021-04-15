#include <bits/stdc++.h>
using namespace std;
class stud
{
    public:
    string name;
    string maj;
    double gpa;
    stud(string aName, string aMaj, double aGpa)
    {
        name = aName;
        maj = aMaj;
        gpa = aGpa;
    }
    bool hasHons()
    {
        if( gpa >= 6)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    system("cls");
    stud student1("Shourya", "cs", 8.99);
    stud student2("Khare", "cs", 7.40);
    cout << student1.hasHons();
    return 0;
}