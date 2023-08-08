#include<stdio.h>
#include<conio.h>
 void main()
 { 
    int a,b,c,d,e,total;
    float percentage;
      printf("Enter the marks of first subject:");
      scanf("%d",&a);
       printf("Enter the marks of second subject:");
       scanf("%d",&b);
        printf("Enter the marks of third subject:");
        scanf("%d",&c);
         printf("Enter the marks of fourth subject:");
         scanf("%d",&d);
           printf("Enter the marks of fifth subject:");
           scanf("%d",&e);
      total=a+b+c+d+e;
      printf("total marks %d", total);
       percentage= total/5*100;
         printf("percentage: %f",percentage);
       getch();      

 }