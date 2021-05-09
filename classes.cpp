#include <bits/stdc++.h>
using namespace std;
// This program here shows the overloading of the constructer
class stud
{
    public:
    string name;
    string maj;
    string ID;
    double gpa;
    string No;
    stud(string aName, string aMaj, double aGpa)
    {
        name = aName;
        maj = aMaj;
        gpa = aGpa;
    }
    stud(string sID, int sNo)
    {
        ID = sID;
        No = sNo;
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
    system("clear");
    stud student1("", "cs", 8.99);
    student1.name = "shourya";
    stud student2("Khare", "cs", 7.40);
    stud stud3("klsdhaasdf0", 213421);
    cout << student1.hasHons() << endl;
    cout << "the string in the stud3 is : " << stud3.ID;
    return 0;
}