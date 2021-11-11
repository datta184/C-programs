#include <stdio.h>
int main()
{
    int row,space,star,x,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    x=2*n-1;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=row-1;space++)
        
            printf(" ");
            for(star=1;star<=x;star++)
            
                printf("*");
               
         x=x-2;
        printf("\n");
    }

    return 0;
}

