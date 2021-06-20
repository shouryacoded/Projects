#include<bits/stdc++.h>
using namespace std;
void DispArray(vector<int> ar){
    for(int i=0; i<ar.size(); i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}
vector<int> BubbleSort(vector<int> ar, int size){
    bool flag = false;
    for(int i = 0; i < size; i++){
        for(int j =0; j <size-i-1;j++){
            if(ar[j+1] < ar[j]){
                swap(ar[j+1], ar[j]);
                flag = true;
            }
        }
        if(flag = false)
            break;
    }
    vector <int> sorted = ar;
    return sorted;
}
vector <int> InsertionSort(vector<int> ar, int size){
    int key,i,j,counter = 0;
    for(int i=1; i<size; i++){
        key = ar[i];
        j = i-1;
        while(j >= 0 && ar[j] > key){
            ar[j+1] = ar[j];
            j = j-1;
            counter++;
        }
        ar[j+1] = key;
    }
    vector <int> sorted = ar;
    return sorted;
}
void Median(vector <int> sorted,int totnum){
    if(totnum%2 != 0){
        int num = (totnum+1)/2;
        cout << sorted[num-1]<< endl;
    }
    else{
        int num1 = totnum/2;
        int num2 = num1-1;
        int num = sorted[num1] + sorted[num2];
        int median = num/2;
        cout << median << endl;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n;i++){
        cin >> ar[i];
    }
    vector <int> sorted = BubbleSort(ar,n);
    Median(sorted, n);
    return 0;
}
