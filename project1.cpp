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
    system("clear");
    int RL , ct = 0;
    char op;
    student stud[50];
    student *ptr = stud;
    cout<< "Enter the details of all the students\n ";
    for(int i = 0; i <= 50; i++)
    {
        cout << "Enter First Name : ";
        //getline(cin, stud[i].Fname);
        cin >> ptr->Fname;
        // above line can also be written as cin.getline(stud[i].Fname, 20),i.e, cin.getline("name", "size")
        cout << "Enter the Last name : ";
       // getline(cin, stud[i].Lname);
        cin >>ptr->Lname;
        cout << "Enter the roll number : ";
        //cin >> stud[i].roll;
        cin >> ptr->roll;
        cout << "Enter the GPA : ";
        //cin >> stud[i].gpa;
        cin >> ptr->gpa;
        cout << "\nTo continue...enter 'y' ";
        cin >> op;
     //   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // the above line a is used to clear the input buffer after the first run of the loop.
        ct++ ;
        ptr++;
        if(op != 'y')
        break;
    }
    cout << "Enter the roll number of the student to get the marksheet : ";
    cin >> RL;
    for(int i = 0; i <= ct; i++)
    {
        // This for loop is used to print the details in the form of a report card
        if(RL == ptr->roll)
        {
            cout << "Name : " << ptr->Fname << " " << ptr->Lname << endl;
            cout << "Roll Number : " << ptr->roll << endl;
            cout << "GPA : " << ptr->gpa << endl;
            cout << "Percentage : " << per(ptr->gpa) << endl;
            cout << "Search Again ?.. enter y " ;
            cin >> op;
            if(op != 'y') 
            {break;}
        }
        ptr--;
    }
    return 0;
}