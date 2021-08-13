#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    cout<<"Enter size\n";
    int N;
    cin>>N;
    if(N>10){
	cout<<"size limit Exceeded\n";
	return 0;
    } 

    double A[N+1][N+1]={0};
    cout<<"Enter Matrix A\n";
    for(int i=1;i<=N;i++){
	for(int j=1;j<=N;j++){
		cin>>A[i][j];
	}
    }
    double B[N+1]={0};
    cout<<"Enter Matrix B\n";
    for(int i=1;i<=N;i++) cin>>B[i];
    cout<<"Enter precision\n";
	int p;
	cin>>p;

    cout<<"forward Elimination\n";
    for(int k=1;k<=N-1;k++){
        int ik = k;
        for(int i=k;i<=N;i++){
            if(fabs(A[i][k])>fabs(A[ik][k])){
                ik=i;
            }
        }
        if(ik>k){
            for(int j=k;j<=N;j++){
                swap(A[k][j],A[ik][j]);
            }
            swap(B[k],B[ik]);
        }

	for(int i=k+1;i<=N;i++){
		double factor = A[i][k]/A[k][k];
		for(int j=1;j<=N;j++){
			A[i][j] = A[i][j] - factor*A[k][j];
		}
		B[i] = B[i] - factor*B[k];
	}
        if(!A[k][k]){
            cout<<"mat is singular\n";
            break;
        }
    }

    double X[N+1]={0};
    for(int i=1;i<=N;i++){
	X[i]=B[i]/A[i][i];
    }
    for(int i=N-1;i>=1;i--){
	double sum = B[i];
	for(int j=i+1;j<=N;j++){
		sum=sum-A[i][j]*X[j];
	}
	X[i]=sum/A[i][i];
    }
    cout<<"X\n";
    cout.precision(p);
    for(int i=1;i<=N;i++){
	cout<<X[i]<<" ";
    }
    cout<<endl;
}