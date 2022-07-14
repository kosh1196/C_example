#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void main()
{
   int a, b, c, e;
   a = 1;
   c = 1;
   while(a<5){
     for(e=0;e<(5-a);e++){
         printf(" * ");
     }
     for(b=1;b<=a;){
        printf(" %d ", c);
        b++;
        c++;
     }
     printf("\n");
     a++;
   }
   getch();
}
