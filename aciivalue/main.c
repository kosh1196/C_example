#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0;
   while(i<=255)
   {
      printf("\n %d = %c ",i,i);
      i++;
   }
   getch();
}
