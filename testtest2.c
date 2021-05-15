#include<stdio.h>
int main(){
    int a = 4;
    for (int i=1; i<=a;i++){
        for(int j=1;j<2*i;j++){
          if(j<=i){
            printf(" %d ",12-j);
          }
          else{
            printf(" %d ",(12-(2*i-j)));
          }
        }
        printf("\n");
    }

    return 0;
}