#include <stdio.h>
#include<math.h>
int checkFibonacci(int a){
            int x = 0;
            int y = 1;
            if (a==x || a==y)
                return 1;
            int z = x+y;
            while(z<=a)
            {
                if(z == a) return 1;
                x = y;
                y = z;
                z = x + y;
            }
            return 0;
}
int main()
{
    int option, number, flag = 0,t1 = 0, t2 = 1;
    printf("Please select from the option given : ");
    printf("\n1. Check if prime number");
    printf("\n2. Check if Fibonacci number\n");
    scanf("%d",&option);
    if(option == 1)
    {
        printf("\nEnter the number : ");
        scanf("%d",&number);
        for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            flag++;
        }
    }
    if(flag == 2) {
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number", number);
    }
    }
    if(option == 2)
    {
        printf("\nEnter the number : ");
        scanf("%d",&number);
        int fab;
        fab = checkFibonacci(number);
        if(fab == 1){
        printf("%d is a Fibonacci number\n", number);
        }
        else{
        printf("%d is not a Fibonacci number\n", number);
        }
    }
    else 
    printf("\nPlease choose the correct option next time\n");
    return 0;
}