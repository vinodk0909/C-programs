#include <stdio.h>

int main()
{
    int n,d,count=0,last;
    
    printf("give the number:");
    scanf("%d",&n);
    printf("enter the digit:");
    scanf("%d",&d);
    while(n!=0)
    {
        last=n%10;
         if(last==d)
           count++;
        n=n/10;
    }
    printf("the frequency of %d is %d",d,count);
    
    return 0;
}
