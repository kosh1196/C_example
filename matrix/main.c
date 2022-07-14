#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[4][2];
  int i,j;
  printf("Enter a no: ");
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<=3;i++)
  {
      for(j=0;j<=1;j++)
      {
          printf("%d",a[i][j]);
      }
      printf("\n");
  }
}
