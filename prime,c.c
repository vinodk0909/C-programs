

#include <stdio.h>

int main()
{
    int i,x,flag=0;
    printf("give the number:");
    scanf("%d",&x);
    
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            printf("%dis not prime",x);
            break;
        }
    }
    if(flag==0)
    printf("%d is a prime",x);
 
      return 0;
}
