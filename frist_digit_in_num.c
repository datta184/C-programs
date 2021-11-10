 #include <stdio.h>
int main()
{
    int c,n,ch;
    
    printf("enter the 1--for--> 2 digit number\nenter the 2--for--> 3 digit number\nenter the 3--for--> 4 digit number\nenter the 4--for--> 5 digit number\n:");
    scanf("%d",&ch);
    printf("input the number:");
    scanf("%d",&n);
    if(n<10)
    {
        printf("your number should be at least of 2 digit but you entered:%d\n",n);
    }
    else
    {
    switch(ch)
    {
        case 1:
            c=n/10;
        break;
        
         case 2:
            c=n/100;
        break;
        
         case 3:
            c=n/1000;
        break;
        
         case 4:
            c=n/10000;
        break;
        
         case 5:
            c=n/100000;
        break;
    }
    printf(" frist digit in number:%d\n",c);
   
    }
     
    return 0;
}

