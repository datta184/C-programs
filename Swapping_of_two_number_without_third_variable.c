// swapping two number without third number

#include <stdio.h>

int main()
{
    int a = 10,b = 20;
    printf("before swap numbers are: a=%d and b=%d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nafter swap numbers are: a=%d and b=%d",a,b);
    return 0;
}
