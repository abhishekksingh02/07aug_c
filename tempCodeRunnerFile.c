#include<stdio.h>
void main()
{   
    int year;
    printf("please enter the current year");
    scanf("%d",&year);
      
        if(year%4==0){
        printf("entered year is leap year");
      }
      else {
        printf("entered year is not a leap year");}
}