#include <stdio.h>
int fact(int n);
void  main()
{ 
    int n,result;
    printf("enter the number:");
    scanf("%d",&n);
    result=fact(n);
    printf("the factorial of %d is %d: ",n,result);
}
int fact(int n)
{
   int i,prod;
   prod=1;
   for(i=1;i<=n;i++)
         prod=prod*i;
         return prod;
}

