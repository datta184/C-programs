// void pointer 
#include <stdio.h>
int main()
{
    void *p;   // here p is a pointer of void type
    
    int x=10;   // declaration of x varaible which has type int and value assigned is 10
    
    p=&x;       //we are assigning address of x to p 
    
    printf("%d",*(int*)p);  // typecasting of the void pointer

    return 0;
}
