#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,i;

 r = 0;
 i = 7;
 while(r<6)
 {
    for(c=1;c=6;c++)
    {
      if(c>=i)
      {
          printf("*");
      }else
      {
        printf("%d",c);
      }
    }
    for(c=5;c>=1;c--)
    {
       if(c>=i)
        {
         printf("*");
        }else
         {
           printf("%d",c);
         }
    }
    printf("\n");
    r++;
    i--;
 }
 getch();
}
