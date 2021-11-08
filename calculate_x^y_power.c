#include <stdio.h>

int main()
{
   int n,m,prod=1;
  printf("enter the vlaue of x:\n");
  scanf("%d",&n);
  printf("enter the value of x^y(y):");
  scanf("%d",&m);
  for(int i=1;i<=m;i++)
  {
      prod=prod*n;
  }
  printf("the value of x^y(y) is %d ",prod);
  return 0;
}


