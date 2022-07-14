#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void main()
{
  int a=0, b, i=0;

  printf("Enter 1st no: ");
  scanf("%d",&a);
  printf("Enter 2nd no: ");
  scanf("%d",&b);
  while(i<=b)
  {
     a = (a*b);
     i++;
  }
  printf("%d",a);
  getch();
}
