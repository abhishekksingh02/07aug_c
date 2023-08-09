#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
     {
        if(n%i == 0)
        {
            count=1;
        }
     }
     if(count==0)
      printf("Prime number");
      else
        printf("Not a prime number");
    return 0;    
     
}