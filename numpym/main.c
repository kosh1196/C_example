#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,r,c;
    r = 0;
    i = 7;
    while(r<6)
    {
      for(c=1;c<=6;)
      {
          if(c>=i)
          {
              printf(" * ");
          }
          else
            {
                printf("%d",c);
            }
          c++;
      }
      for(c=5;c>=1;)
      {
         if(c>=i)
         {
             printf(" * ");

         }
         else
         {
           printf("%d",c);
         }
         c--;
      }
      printf("\n");
      r++;
      i--;
    }
}
