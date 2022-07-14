#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  char a,c;
  printf("Enter a alphabet: ");
  scanf("%c",&a);
  if(a >= 97){
    c = 65 + (a - 97);}
  else{
      c = a ;}
  if( c == 'A' || c == 'E' || c =='I' ||c == 'O'  || c == 'U')
      printf("This is a vowel");
  else
        printf("This is a consonant");
}
