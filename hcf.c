
#include <stdio.h>

int main()
{
    int n,a,i,sum=0,prod,last;
    printf("enter the number:");
    scanf("%d",&n);
    a=n;
    
     while(n>0)
       {
         last=n%10;
          n=n/10;
         prod=1;
         for(i=1;i<=last;i++)
           prod=prod*i;
          
           sum=sum+prod;
       } 
    
    
    if (sum==a)
    printf("%d is a srong Number",a);
    else
    printf("%d is not a strong Number",a);
    
    return 0;
}
