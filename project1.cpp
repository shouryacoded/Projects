#include<bits/stdc++.h>
using namespace std;
// this program is very important as it show the use of a function and a structure in the form of an array
int per(int aGpa)
{
    return aGpa*10;
}
struct student
{
    string Fname;
    string Lname;
    int roll;
    double gpa;
};
int main()
{
    system("cls");
    int RL , ct = 0;
    char op;
    student stud[50];
    cout<< "Enter the details of all the students\n ";
    for(int i = 0; i <= 50; i++)
    {
        cout << "Enter First Name : ";
        getline(cin, stud[i].Fname);
        // above line can also be written as cin.getline(stud[i].Fname, 20),i.e, cin.getline("name", "size")
        cout << "Enter the Last name : ";
        getline(cin, stud[i].Lname);
        cout << "Enter the roll number : ";
        cin >> stud[i].roll;
        cout << "Enter the GPA : ";
        cin >> stud[i].gpa;
        cout << "\nTo continue...enter 'y' ";
        cin >> op;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // the above line a is used to clear the input buffer after the first run of the loop.
        ct++ ;
        if(op != 'y')
        break;
    }
    cout << "Enter the roll number of the student to get the marksheet : ";
    cin >> RL;
    for(int i = 0; i <= ct; i++)
    {
        // This for loop is used to print the details in the form of a report card
        if(RL == stud[i].roll)
        {
            cout << "Name : " << stud[i].Fname << " " << stud[i].Lname << endl;
            cout << "Roll Number : " << stud[i].roll << endl;
            cout << "GPA : " << stud[i].gpa << endl;
            cout << "Percentage : " << per(stud[i].gpa) << endl;
            cout << "Search Again ?.. enter y " ;
            cin >> op;
            if(op != 'y') 
            {break;}
        }
    }
    return 0;
}