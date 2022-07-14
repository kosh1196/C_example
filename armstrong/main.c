#include <stdio.h>
#include <conio.h>
 int main()
{
  int a, b, i=1, temp, nt, y;
    for(a=1;a<=500;a++)
    {
    temp = a;
    nt = 0;
    while(temp%10!=0)
    {
      nt++;
      temp = temp/10;
    }
    temp = a;
    b = 0;
    while(temp%10!=0)
    {
       y = 1;
       for(i=0;i<nt;i++)
       {
         y = y*(temp%10);
         temp = temp/10;
         b=b+y;
       }
       if(a==b)
       {
          printf("%d", a);
       }
    }
    getch();
    }

}
