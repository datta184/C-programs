//this a program for the for identify werher the given number is perfect or not  
//a positive integer that is equal to the sum of its proper divisors
#include <stdio.h>

int main()
{
    int i,sum=0,n;
    printf("input:");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
    printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }

    return 0;
}

