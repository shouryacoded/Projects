#include <stdio.h>

int main(){
int number = 2,sum = 0;
printf("%d\n",number);
for(int i = 1;i < 75;i++){
    number += 2;
    printf("%d\n",number);
    if(number%5 == 0){
        sum += number;
    }
}
printf("the sum of numbers divisible by 5 is %d\n", sum );

return 0;
}