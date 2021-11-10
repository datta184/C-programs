// a special number whose sum of the factorial of digits is equal to the original number

#include <stdio.h>
int main()
{
    int a,i,n,digit,sum,prod;
    
    printf("input:");
    scanf("%d",&n);
    a=n;
    sum=0;
    
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        prod=1;
        for(i=1;i<=digit;i++)
          prod=prod*i;
          sum=sum+prod;
     
      }
          if(sum==a)
              {
             printf("%d is a strong number",a);
                }
             else
              {
              printf("%d is not a strong number",a);
              }
    return 0;
}

