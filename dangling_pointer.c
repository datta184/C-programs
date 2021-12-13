//  dangling pointer is a pointer that points to invalid data or to data which is not valid anymore

#include <stdio.h>
int *fun()
{
    int x=25;
    return &x;
}

int main()
{
    int *p;
    
    p = fun();

    printf("%d",p);

    return 0;
}
