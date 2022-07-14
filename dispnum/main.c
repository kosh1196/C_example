#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,i;
   char b[10];
   printf("enter a no:");
   scanf("%d",&a);
   printf("Enter a name :");
   scanf("%s",&b);
   i=0;
   while(i<=a)
   {
       printf("\t \n %s",b);
       i++;
   }
}
