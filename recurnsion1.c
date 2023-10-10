#include<stdio.h>
void natural(int n)
{
    if(n<=100)
    {
         printf("%d\n",n);
         natural(n+1);
    }
}
void main()
{
    int n=1;
    natural(n);
}   