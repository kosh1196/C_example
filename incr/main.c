#include <stdio.h>
#include <conio.h>
void main()
{
    int r , c;
    r = 1;
    while(r<5)
    {
        for(c=1;c<r;c++)
        {
           printf("%d", c);
        }
     r++;
    printf("\n");
    }
    getch();
}
