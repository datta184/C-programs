/* array using pointer*/

#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int i,*ptr=a;

    for(i=0;i<5;i++)
    printf("%u\n",ptr[i]);

    return 0;
}
