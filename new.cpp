#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    //Declare Variables
    string orgcity = "";
    string destcity = "";
    int hours = 0;
    double minutes = 0.0;
    int hoursmin = 0;
    int minutesmin = 0;
    int minutesmax = 60;
    double dist = 0.0;
    double totalhours = 0.0;
    double avespeed = 0.0;
    double num1 = 0;

    cout << "How many times would you like to calculate the average speed: ";
    cin >> num1;

    for(num1; num1 > 0; --num1)
    {

    //Collect Data
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter the city of origin: ";
    getline(cin, orgcity);

    cout << "Enter the destination city: ";
    getline(cin, destcity);

    //If Statements and Loops...Start here
    do {
        cout << "Enter the number of hours spent in travel: ";
        cin >> hours;

        if (hours < hoursmin)
            cout << "     Invalid number of hours - must be >= 0" << endl;

    } while (hours < hoursmin);

    do {
    cout << "Enter the number of minutes spent in travel: ";
    cin >> minutes;

    if (minutes >= minutesmax){
    cout <<"     Invalid number of minutes - must be in range 0..59" << endl;
    }
    if (minutes <= minutesmin) {
        cout << "     Invalid number of minutes - must be in range 0..59" << endl;
    }
    } while (minutes >= minutesmax);

    //End Here

    cout << "Enter the distance (in miles) between the two cities: ";
    cin >> dist;
    cout << endl;

    //Formula and Final Prompt
    totalhours = (hours + (minutes / 60.0));
    avespeed = dist / totalhours;

    cout << "The average speed of the vehicle traveling" << endl;
    cout << "between " << orgcity << " and " << destcity << " is " << fixed << setprecision(2) << avespeed << " miles per hour." << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    }
    return 0;
}