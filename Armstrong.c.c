
#include<stdio.h>

int main()
{
    int b,last,n,a,prod,count=0,i,sum;
    
    printf("give a number:");
    scanf("%d",&n);
    b=a=n;
    while(n>0)
      {
          n=n/10;
       count++;
      
        }
       // printf("%d",a);
        sum=0;
     while(a>0)
      {
           last=a%10;
           a=a/10;
           prod=1;
             for(i=1;i<=count;i++)
               prod=prod*last;
               
               sum=sum+prod;
               
         }
         //printf("%d",sum);
     if(sum==b)
      printf("%d is the Armstong Number",b);
      else
      printf("%d is not Armstron Number",b);
    
    return 0;
}
