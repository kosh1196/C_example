#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  if(a%2==0)
   printf("The number is even.");
   else
    printf("The number is odd.");
   getch();
}
