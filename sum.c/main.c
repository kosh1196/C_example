#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,i;
  b = 0;
  printf("Enter a 5 digit no: ");
  scanf("%d",&a);
  for(i=0;i<=4;i++)
  {
     b = b + (a%10);
     a = a/10;
     printf("\n Value of b: %d and \n value of a: %d",b,a);
     printf("\n Sum of all the no:",b);
  }

}
