#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[10],i;
  char n[10][10];
  printf("Enter a number & name: ");
  for(i=0;i<=5;i++)
  {
      scanf("%d %s",&a[i],&n[i]);
  }
  for(i=5;i>=0;i--)
  {
      printf(" \n %d %s",a[i],n[i]);
  }
}
