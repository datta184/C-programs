#include <stdio.h>
int main()
{
    int a,b,min,abatakkaHCF,LCM;
    printf("eter the frist number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    min=a<b?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        abatakkaHCF=i;
    }
    LCM=(a*b)/abatakkaHCF;
    printf("the HCF of %d and %d is: %d \n",a,b,abatakkaHCF);
    printf("the LCM of %d and %d is: %d ",a,b,LCM);

    return 0;
}

