#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, randnum; 
    unsigned int seedval;
    time_t t;
    seedval = (unsigned) time(&t);
    //time(&t) function will initialize the time with system time
    srand(seedval); // seed the random variable genetrator
    for(i = 0; i < 5; i++)
    {
        cout << (rand() % 30) + 15 << endl;

    }
    return 0;
}