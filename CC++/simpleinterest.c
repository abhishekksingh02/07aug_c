#include<stdio.h>
#include<math.h>
 int main()
  { 
    float amt,rate,time,si;
     printf("Enter the amount;");
     scanf("%d",&amt);
      printf("Enter the rate:");
      scanf("%d",&rate);
       printf("Enter the time:");
       scanf("%d",&time);
      si=(amt*rate*time)/100;
      printf("Simple interest=%f",si);
    return 0;
  }