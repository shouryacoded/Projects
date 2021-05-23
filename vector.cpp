#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    vector<int> vec1;
    int ele;
    for(int i = 0; i < vec1.size(); i++)
    {
        cout << "Enter the values to be entered in the array\n";
        cin >> ele;
        vec1.push_back(ele);
    }
    cout <<"\n Now we are going to print the value stored in the array";
    for(int i = 0; i < vec1.size(); i++)
    {
        cout << " " << vec1[i];
    }
    return 0;
}