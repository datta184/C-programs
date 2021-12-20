// swapping of the two varaible by passing address 
#include <stdio.h>
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=20;
    printf("vales before swapping %d %d\n",a,b);
    swap(&a,&b);
    printf("vales after swapping %d %d\n",a,b);
    

    return 0;
}
