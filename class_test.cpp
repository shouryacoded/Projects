#include<bits/stdc++.h>
using namespace std;
class best{
    string name;
    public:
    int roll;
    best(int aroll)
    {
        roll = aroll;
    }
    best(string Aname)
    {
        setbest(Aname);
    }
    void setbest(string x)
    {
        name = x;
    }
    string getbest()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
};
int main()
{
    system("clear");
    best stud(12);
    stud("Shourya");
//    stud("Shourya");  
    cout << "The name entered is : " << stud.getbest() << endl;
    cout << "The roll numbers passed to the constructor is : " << stud.roll;
    return 0;
}