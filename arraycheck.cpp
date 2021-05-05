#include<bits/stdc++.h>
using namespace std;
int SameCountusingPointer(int *ar, int *ar1, int size = 5)
{
    int count = 0;
/*    while(size--)
    {
        do{
            if(*ar == *ar1)
            {
                count++; // count  = 2
                ar1++;
            }
        }while(*ar != *ar1 && size--);
        ar++;
    }*/
    int **n1 = &ar1;
    for(int i = 0; i < size;i++)
    {
        for(int j = 0; j < size;j++)
        {
            if(*ar == *ar1)
            {
                count++;
                
            }
        ar1++;
        }
        ar1 = &n1;
        ar++;
    }
    return count;
}
int SameEleCount(int ar1[], int ar2[], int size = 5)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(ar1[i] == ar2[j])
            {
                count++;
            }
        }   
    }
    return count;
}
int main()
{
    system("clear");
    int ar1[5] = {1, 23, 45, 67, 99}; 
    int ar2[5] = {12, 3, 45, 7, 99};
//   cout << "The number of same elements in the array is : "<<SameEleCount(ar1, ar2) << endl;
      cout << "The number of same elements in the array is : "<<SameCountusingPointer(ar1, ar2) << endl;

    return 0;
}