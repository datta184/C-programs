
#include <stdio.h>

int main()
{
    void *p;
    int x=20;
    p=&x;
    printf("%d\n",x);
    printf("%u",*(int*)p);
}
