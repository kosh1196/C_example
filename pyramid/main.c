#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r , c ,i;
  r = 0;
  i = 7;
  while(r<6)
  {
    for(c = 1; c<=6;)
    {
      if(c>=i)
      {
        printf("* \t");
      }
      else
        {
          printf("%d \t", c);
        }
      c++;
    }
    for(c=5;c>=1;)
    {
      if(c>=i)
      {
        printf("* \t");
      }
      else
      {
        printf("%d \t", c);
      }
      c--;
      }
      printf("\n");
      r++;
      i--;
    }
  getc();
  }

