#include <stdio.h>
#include<math.h>
int main()
{
    int n,x,y;
    printf("Enter the number:");
    scanf("%d",&n);
    x=n&(n-1);
    y=log(n^x)/log(2);
    printf("the position of frist bit from right side is : %d",y+1);
    

    return 0;
}



