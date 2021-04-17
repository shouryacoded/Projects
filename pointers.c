#include<stdio.h>
int main()
{
    int a;
    a = 10;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", p+1 );
    printf("%d\n",sizeof(int));
    return 0;
}