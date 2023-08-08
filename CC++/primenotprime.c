#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
     {
        if(n%1==0)
        {
            count++;
        }
     }
     if(count==2)
      printf("Prime number");
      else
        printf("Not a prime number");
    return 0;    
     
}