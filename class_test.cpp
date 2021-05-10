#include<bits/stdc++.h>
using namespace std;
class best{
    string name;
    public:
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
};
int main()
{
    system("clear");
    best stud("Shourya");
    cout << "The name entered is : " << stud.getbest() << endl;
    return 0;
}