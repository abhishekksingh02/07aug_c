#include <stdio.h>
#include <math.h>
void main()
{
  int a, b, c, d, e, total;
  float percentage;
  printf("Enter the marks of first subject:");
  scanf("%d", &a);
  printf("Enter the marks of second subject:");
  scanf("%d", &b);
  printf("Enter the marks of third subject:");
  scanf("%d", &c);
  printf("Enter the marks of fourth subject:");
  scanf("%d", &d);
  printf("Enter the marks of fifth subject:");
  scanf("%d", &e);
  total = a + b + c + d + e;
  printf("\ntotal marks %d", total);
  if (a <= 28 || b <= 28 || c <= 28 || d <= 28 || e <= 28)
  {

    printf("\nYOU ARE FAIL.\n");
  }
  else
  {
    percentage = total / 5;
    printf("percentage: %f", percentage);
    if (percentage > 75)
    {
      printf("PASSED WITH DISTINCTION:");
    }
    else if (percentage > 60 && percentage <= 75)
      printf("PASSED WITH FIRST CLASS:");
    else if (percentage > 50 && percentage <= 60)
      printf("PASSED WITH SECOND CLASS:");
    else if (percentage > 35 && percentage <= 50)
      printf("PASSED WITH PASS CLASS:");

    else
      printf("SORRY APPLY FOR REASSESSMENT:");
  }
}