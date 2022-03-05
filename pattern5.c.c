#include<stdio.h>
int main()
{
    int space,star,row,x,y,n;
    printf("give a number:");
    scanf("%d",&n);
    
    x=1;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf(" ");
        for(star=1;star<=x;star++)
        printf("*");
        x=x+2;
        printf("\n");
     }
     y=2*n-3;
     for(row=1;row<=n-1;row++)
     {
         for(space=1;space<=row;space++)
         printf(" ");
         for(star=1;star<=y;star++)
         printf("*");
         y=y-2;
         printf("\n");
     }
}