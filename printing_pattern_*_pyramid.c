#include<stdio.h>
int main()
{
    int row,space,star,x,n;
    x=1;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for (row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf(" ");
        for(star=1;star<=x;star++)
        printf("*");
        printf("\n"); 
        x=x+2;
        
       
    }

    return 0;
}

