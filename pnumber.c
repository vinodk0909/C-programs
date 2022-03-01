#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    printf("enter a number:");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        sum=sum+i;
    }
    
    if(sum==x)
    printf("%d is a perfect number",x);
    else
    printf("%d is not a perfect number",x);

    return 0;
}
