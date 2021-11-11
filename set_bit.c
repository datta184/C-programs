//Set bits in a binary number is represented by 1
#include <stdio.h>
int main()
{
    int q,count=0;
    printf("Enter the number:");
    scanf("%d",&q);
    while(q>0)
    {
        if((q&1)==1)
        
            count++;
            q=q/2;   
            // q=q>>1; both are same use anyone
        
    }
    printf("number of set bits are %d \n",count);
    return 0;
}

