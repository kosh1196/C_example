#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bs , gs, hra,da;
    printf("Enter basic salary:");
    scanf("%f",&bs);
    if(bs<1500)
    {
        hra = bs * 1/10;
        da = bs * 9/10;
    }
    else
    {
      hra = 500;
      da = bs * 98/100;
    }
    gs = bs + hra+ da;
    printf("gross salary: RS.%f",gs);

}
