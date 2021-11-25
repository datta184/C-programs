#include<stdio.h>
int main()
{
    int val[5];

    printf("Inset the 5 element:");
    for(int i=1||0;i<=5;i++)
    {
        scanf("%d",&val[i]);
    }

    for(int i=1||0;i<=5;i++)
    {
        printf("The element inserted by you are at %d location is:%d\n",i,val[i]);
    }
    
}